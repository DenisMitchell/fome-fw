#include "pch.h"

#if EFI_WIFI

#include "driver/include/m2m_wifi.h"
#include "socket/include/socket.h"

#include "thread_controller.h"
#include "tunerstudio.h"

static int listenerSocket = -1;
static int connectionSocket = -1;

chibios_rt::BinarySemaphore isrSemaphore(/* taken =*/ true);

void os_hook_isr() {
	isrSemaphore.signalI();
}

// TX Helper data
static const uint8_t* sendBuffer;
static size_t sendSize;
bool sendRequest = false;
chibios_rt::BinarySemaphore sendDoneSemaphore(/* taken =*/ true);

// RX Helper data
static uint8_t recvBuffer[512];
static input_queue_t wifiIqueue;

static bool socketReady = false;

struct BatchedChannelWriter : public TsChannelBase {
	BatchedChannelWriter(const char* name)
		: TsChannelBase(name)
	{
	}

	void write(const uint8_t* buffer, size_t size, bool /*isEndOfPacket*/) final override {
		if (size > (efi::size(m_buffer) - m_size)) {
			// This write will overflow the buffer, flush then see if it fits
			flush();
		}

		if (size > (efi::size(m_buffer) - m_size)) {
			// It's still too big, just write it directly and skip the buffer
			writePacket(buffer, size);
		} else {
			// The data fits, copy to the write buffer
			memcpy(m_buffer + m_size, buffer, size);
			m_size += size;
		}
	}

	void flush() final override {
		if (m_size) {
			writePacket(m_buffer, m_size);
			m_size = 0;
		}
	}

	// Write some data to the underlying stream, with an implied flush() at the end
	virtual void writePacket(const uint8_t* buffer, size_t size) = 0;

private:
	uint8_t m_buffer[2000];
	size_t m_size = 0;
};

class WifiChannel final : public BatchedChannelWriter {
public:
	WifiChannel()
		: BatchedChannelWriter("WiFi")
	{
	}

	bool isReady() const override {
		return true;
	}

	void writePacket(const uint8_t* buffer, size_t size) override {
		sendBuffer = buffer;
		sendSize = size;

		sendRequest = true;
		isrSemaphore.signal();

		sendDoneSemaphore.wait();
	}

	size_t readTimeout(uint8_t* buffer, size_t size, int timeout) override {
		return iqReadTimeout(&wifiIqueue, buffer, size, timeout);
	}
};

static WifiChannel wifiChannel;

class WifiHelperThread : public ThreadController<4096> {
public:
	WifiHelperThread() : ThreadController("WiFi", WIFI_THREAD_PRIORITY) {}
	void ThreadTask() override {
		while (true)
		{
			m2m_wifi_handle_events(nullptr);

			if (socketReady && sendRequest) {
				send(connectionSocket, (void*)sendBuffer, sendSize, 0);
				sendRequest = false;
			} else {
				isrSemaphore.wait(TIME_MS2I(1));
			}
		}
	}
};

static WifiHelperThread wifiHelper;

static tstrWifiInitParam param;

static tstrM2MAPConfig apConfig;

void wifiCallback(uint8 u8MsgType, void* pvMsg) {
	switch (u8MsgType) {
		case M2M_WIFI_REQ_DHCP_CONF: {
			auto& dhcpInfo = *reinterpret_cast<tstrM2MIPConfig*>(pvMsg);
			uint8_t* addr = reinterpret_cast<uint8_t*>(&dhcpInfo.u32StaticIP);
			efiPrintf("WiFi client connected DHCP IP is %d.%d.%d.%d", addr[0], addr[1], addr[2], addr[3]);
		} break;
		default:
			efiPrintf("WifiCallback: %d", (int)u8MsgType);
			break;
	}
}

uint8_t rxBuf[512];

static void socketCallback(SOCKET sock, uint8_t u8Msg, void* pvMsg) {
	switch (u8Msg) {
		case SOCKET_MSG_BIND: {
			auto bindMsg = reinterpret_cast<tstrSocketBindMsg*>(pvMsg);

			if (bindMsg && bindMsg->status == 0) {
				// Socket bind complete, now listen!
				listen(sock, 1);
			}
		} break;
		case SOCKET_MSG_LISTEN: {
			auto listenMsg = reinterpret_cast<tstrSocketListenMsg*>(pvMsg);
			if (listenMsg && listenMsg->status == 0) {
				// Listening, now accept a connection
				accept(sock, nullptr, nullptr);
			}
		} break;
		case SOCKET_MSG_ACCEPT: {
			auto acceptMsg = reinterpret_cast<tstrSocketAcceptMsg*>(pvMsg);
			if (acceptMsg && (acceptMsg->sock >= 0)) {
				connectionSocket = acceptMsg->sock;

				recv(connectionSocket, &rxBuf, 1, 0);

				socketReady = true;
			}
		} break;
		case SOCKET_MSG_RECV: {
			auto recvMsg = reinterpret_cast<tstrSocketRecvMsg*>(pvMsg);
			if (recvMsg && (recvMsg->s16BufferSize > 0)) {
				{
					chibios_rt::CriticalSectionLocker csl;

					for (size_t i = 0; i < recvMsg->s16BufferSize; i++) {
						iqPutI(&wifiIqueue, rxBuf[i]);
					}
				}

				size_t nextRecv;
				if (recvMsg->u16RemainingSize < 1) {
					// Always try to read at least 1 byte
					nextRecv = 1;
				} else if (recvMsg->u16RemainingSize > sizeof(rxBuf)) {
					// Remaining is too big for the buffer, so just read one buffer worth
					nextRecv = sizeof(rxBuf);
				} else {
					// The full thing will fit, try to read it
					nextRecv = recvMsg->u16RemainingSize;
				}

				// start the next recv
				recv(sock, &rxBuf, nextRecv, 0);
			} else {
				close(sock);
				socketReady = false;
			}
		} break;
		case SOCKET_MSG_SEND: {
			// Send completed, notify caller!
			chibios_rt::CriticalSectionLocker csl;
			sendDoneSemaphore.signalI();
		} break;
	}
}

struct WifiConsoleThread : public TunerstudioThread {
	WifiConsoleThread() : TunerstudioThread("WiFi Console") { }

	TsChannelBase* setupChannel() override {
		// Initialize the WiFi module
		param.pfAppWifiCb = wifiCallback;
		if (M2M_SUCCESS != m2m_wifi_init(&param)) {
			return nullptr;
		}

		strcpy(apConfig.au8SSID, "FOME EFI");
		apConfig.u8ListenChannel	= 1;
		apConfig.u8SecType			= M2M_WIFI_SEC_OPEN;
		apConfig.u8SsidHide			= 0;

		// IP Address
		apConfig.au8DHCPServerIP[0]	= 192;
		apConfig.au8DHCPServerIP[1]	= 168;
		apConfig.au8DHCPServerIP[2]	= 1;
		apConfig.au8DHCPServerIP[3]	= 1;

		// Trigger AP
		if (M2M_SUCCESS != m2m_wifi_enable_ap(&apConfig)) {
			return nullptr;
		}

		// Start the helper thread
		wifiHelper.start();

		// Set up the socket APIs
		socketInit();
		registerSocketCallback(socketCallback, nullptr);

		// Start listening on the socket
		sockaddr_in address;
		address.sin_family = AF_INET;
		address.sin_port = _htons(17999);
		address.sin_addr.s_addr = 0;

		listenerSocket = socket(AF_INET, SOCK_STREAM, SOCKET_CONFIG_SSL_OFF);
		bind(listenerSocket, (sockaddr*)&address, sizeof(address));

		return &wifiChannel;
	}
};

static WifiConsoleThread wifiThread;

void startWifiConsole() {
	iqObjectInit(&wifiIqueue, recvBuffer, sizeof(recvBuffer), nullptr, nullptr);

	wifiThread.start();
}

#endif // EFI_WIFI
