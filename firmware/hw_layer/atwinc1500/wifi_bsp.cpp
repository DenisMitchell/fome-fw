#include "pch.h"

#include "ch.h"
#include "hal.h"

#include "digital_input_exti.h"

#include "bus_wrapper/include/nm_bus_wrapper.h"

static void isrAdapter(void* arg, efitick_t)
{
	reinterpret_cast<tpfNmBspIsr>(arg)();
}

void nm_bsp_sleep(uint32 u32TimeMsec) {
	chThdSleepMilliseconds(u32TimeMsec);
}

void nm_bsp_interrupt_ctrl(uint8 u8Enable) {
	// TODO!
}

void nm_bsp_register_isr(tpfNmBspIsr pfIsr)
{
	efiExtiEnablePin("WiFi ISR", Gpio::A0, PAL_EVENT_MODE_FALLING_EDGE, isrAdapter, (void*)pfIsr);
}

static SPIDriver* wifiSpi = &SPID1;

#define NM_BUS_MAX_TRX_SZ	512

tstrNmBusCapabilities egstrNmBusCapabilities =
{
	NM_BUS_MAX_TRX_SZ
};

sint8 nm_spi_rw(uint8* pu8Mosi, uint8* pu8Miso, uint16 u16Sz) {
	spiExchange(wifiSpi, u16Sz, pu8Mosi, pu8Miso);

	return M2M_SUCCESS;
}

sint8 nm_bus_init(void*) {
	// TODO!
	spiStart(wifiSpi, nullptr);

	return 0;
}

sint8 nm_bus_deinit(void) {
	spiStop(wifiSpi);

	return M2M_SUCCESS;
}

sint8 nm_bus_speed(uint8 level) {
	// Do we even need to do anything here?
	return M2M_SUCCESS;
}
