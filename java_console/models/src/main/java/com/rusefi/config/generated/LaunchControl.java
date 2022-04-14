package com.rusefi.config.generated;

// this file was generated automatically by rusEFI tool ConfigDefinition.jar based on (unknown script) controllers/algo\launch_control_state.txt Thu Apr 14 15:45:19 EDT 2022

// by class com.rusefi.output.FileJavaFieldsConsumer
import com.rusefi.config.*;

public class LaunchControl {
	public static final int ADC_CHANNEL_NONE = 0;
	public static final int AFTERSTART_DECAY_CURVE_SIZE = 8;
	public static final int AFTERSTART_ENRICH_CURVE_SIZE = 8;
	public static final int AFTERSTART_HOLD_CURVE_SIZE = 8;
	public static final int AUX_ANALOG_INPUT_COUNT = 8;
	public static final int AUX_DIGITAL_VALVE_COUNT = 2;
	public static final int BANKS_COUNT = 2;
	public static final int BARO_CORR_SIZE = 4;
	public static final int BLOCKING_FACTOR = 256;
	public static final int BOOST_LOAD_COUNT = 8;
	public static final int BOOST_RPM_COUNT = 8;
	public static final int CAM_INPUTS_COUNT = 4;
	public static final int CAM_INPUTS_COUNT_padding = 0;
	public static final int CAMS_PER_BANK = 2;
	public static final int CAMS_PER_BANK_padding = 0;
	public static final int CAN_DEFAULT_BASE = 0x200;
	public static final int CAN_ECU_SERIAL_RX_ID = 0x100;
	public static final int CAN_ECU_SERIAL_TX_ID = 0x102;
	public static final String CAN_RX_PREFIX = "CAN_rx";
	public static final int CLT_CRANKING_CURVE_SIZE = 8;
	public static final int CLT_CURVE_SIZE = 16;
	public static final int CLT_LIMITER_CURVE_SIZE = 4;
	public static final int CLT_TIMING_CURVE_SIZE = 8;
	public static final String CMD_AC_RELAY_BENCH = "acrelaybench";
	public static final String CMD_ALTERNATOR_PIN = "set_alternator_pin";
	public static final String CMD_BOOST_PIN = "set_boost_pin";
	public static final String CMD_BURNCONFIG = "burnconfig";
	public static final String CMD_DATE = "date";
	public static final String CMD_DISABLE = "disable";
	public static final String CMD_ENABLE = "enable";
	public static final String CMD_ENGINE_TYPE = "engine_type";
	public static final String CMD_ENGINESNIFFERRPMTHRESHOLD = "engineSnifferRpmThreshold";
	public static final String CMD_ETB_DUTY = "set_etb_duty";
	public static final String CMD_EXTERNAL_STIMULATION = "ext_stimulation";
	public static final String CMD_FAN2_BENCH = "fan2bench";
	public static final String CMD_FAN_BENCH = "fanbench";
	public static final String CMD_FUEL_BENCH = "fuelbench";
	public static final String CMD_FUNCTIONAL_TEST_MODE = "test_mode";
	public static final String CMD_GET = "get";
	public static final String CMD_HPFP_BENCH = "hpfpbench";
	public static final String CMD_IDLE_PIN = "set_idle_pin";
	public static final String CMD_IGNITION = "ignition";
	public static final String CMD_IGNITION_PIN = "set_ignition_pin";
	public static final String CMD_INJECTION = "injection";
	public static final String CMD_INJECTION_PIN = "set_injection_pin";
	public static final String CMD_LOGIC_PIN = "set_logic_input_pin";
	public static final String CMD_MIL_BENCH = "milbench";
	public static final String CMD_PINS = "pins";
	public static final String CMD_PWM = "pwm";
	public static final String CMD_REBOOT = "reboot";
	public static final String CMD_REBOOT_DFU = "reboot_dfu";
	public static final String CMD_RESET_ENGINE_SNIFFER = "reset_engine_chart";
	public static final String CMD_RPM = "rpm";
	public static final String CMD_SELF_STIMULATION = "self_stimulation";
	public static final String CMD_SET = "set";
	public static final String CMD_SPARK_BENCH = "sparkbench";
	public static final String CMD_STARTER_BENCH = "starterbench";
	public static final String CMD_TRIGGER_HW_INPUT = "trigger_hw_input";
	public static final String CMD_TRIGGER_PIN = "set_trigger_input_pin";
	public static final String CMD_TRIGGER_SIMULATOR_PIN = "set_trigger_simulator_pin";
	public static final String CMD_TRIGGERINFO = "triggerinfo";
	public static final int CMD_TS_BENCH_CATEGORY = 22;
	public static final int CMD_TS_FSIO_CATEGORY = 33;
	public static final int CMD_TS_SOLENOID_CATEGORY = 41;
	public static final int CMD_TS_X14 = 20;
	public static final int CMD_TS_X31 = 49;
	public static final String CMD_VSS_PIN = "vss_pin";
	public static final String CMD_WRITECONFIG = "writeconfig";
	public static final int COMPOSITE_DATA_LENGTH = 2500;
	public static final int COMPOSITE_DATA_LENGTH_HALF = 1250;
	public static final int COMPOSITE_PACKET_COUNT = 500;
	public static final int COMPOSITE_PACKET_SIZE = 5;
	public static final String CONSOLE_DATA_PROTOCOL_TAG = " @";
	public static final int CRANKING_ADVANCE_CURVE_SIZE = 4;
	public static final int CRANKING_CLT_IDLE_CURVE_SIZE = 8;
	public static final int CRANKING_CURVE_SIZE = 8;
	public static final String CRITICAL_PREFIX = "CRITICAL";
	public static final int DC_PER_STEPPER = 2;
	public static final int DIGIPOT_COUNT = 4;
	public static final int DWELL_CURVE_SIZE = 8;
	public static final int EGT_CHANNEL_COUNT = 8;
	public static final String ENGINE_MAKE_BMW = "BMW";
	public static final String ENGINE_MAKE_GM = "GM";
	public static final String ENGINE_MAKE_HONDA = "Honda";
	public static final String ENGINE_MAKE_Hyundai = "Hyundai";
	public static final String ENGINE_MAKE_LADA = "Lada";
	public static final String ENGINE_MAKE_MAZDA = "Mazda";
	public static final String ENGINE_MAKE_MERCEDES = "Mercedes";
	public static final String ENGINE_MAKE_NISSAN = "Nissan";
	public static final String ENGINE_MAKE_SUBARU = "Subaru";
	public static final String ENGINE_MAKE_TOYOTA = "Toyota";
	public static final String ENGINE_MAKE_VAG = "VAG";
	public static final int ENGINE_NOISE_CURVE_SIZE = 8;
	public static final int ENGINE_SNIFFER_UNIT_US = 10;
	public static final int ENUM_16_BITS = 60000;
	public static final int ENUM_32_BITS = 2000000000;
	public static final int ERROR_BUFFER_SIZE = 120;
	public static final int ETB_BIAS_CURVE_LENGTH = 8;
	public static final int ETB_COUNT = 2;
	public static final int ETB_HW_MAX_FREQUENCY = 3000;
	public static final int FLASH_DATA_VERSION = 10009;
	public static final int FUEL_LEVEL_TABLE_COUNT = 8;
	public static final int FUEL_LOAD_COUNT = 16;
	public static final int FUEL_RPM_COUNT = 16;
	public static final int GAP_TRACKING_LENGTH = 18;
	public static final String GAUGE_COIL_DWELL_TIME = "dwell: coil charge time";
	public static final String GAUGE_NAME_ACCEL_ROLL = "Acceleration: Roll";
	public static final String GAUGE_NAME_ACCEL_X = "Acceleration: X";
	public static final String GAUGE_NAME_ACCEL_Y = "Acceleration: Y";
	public static final String GAUGE_NAME_ACCEL_YAW = "Acceleration: Yaw";
	public static final String GAUGE_NAME_ACCEL_Z = "Acceleration: Z";
	public static final String GAUGE_NAME_AFR = "Air/Fuel Ratio";
	public static final String GAUGE_NAME_AFR2 = "Air/Fuel Ratio 2";
	public static final String GAUGE_NAME_AIR_FLOW_ESTIMATE = "MAF estimate";
	public static final String GAUGE_NAME_AIR_FLOW_MEASURED = "MAF sensor";
	public static final String GAUGE_NAME_AIR_MASS = "air mass";
	public static final String GAUGE_NAME_AUX_LINEAR_1 = "Aux Linear 1";
	public static final String GAUGE_NAME_AUX_LINEAR_2 = "Aux Linear 2";
	public static final String GAUGE_NAME_AUX_TEMP1 = "Aux temp 1";
	public static final String GAUGE_NAME_AUX_TEMP2 = "Aux temp 2";
	public static final String GAUGE_NAME_BARO_PRESSURE = "Barometric pressure";
	public static final String GAUGE_NAME_BOOST_CLOSED_LOOP = "Boost Closed Loop";
	public static final String GAUGE_NAME_BOOST_OPEN_LOOP = "Boost Open Loop";
	public static final String GAUGE_NAME_BOOST_OUTPUT = "Boost Output";
	public static final String GAUGE_NAME_BOOST_TARGET = "Boost Target";
	public static final String GAUGE_NAME_CLT = "CLT";
	public static final String GAUGE_NAME_CPU_TEMP = "CPU Temperature";
	public static final String GAUGE_NAME_CURRENT_GEAR = "Current Gear";
	public static final String GAUGE_NAME_DEBUG_F1 = "debug f1";
	public static final String GAUGE_NAME_DEBUG_F2 = "debug f2: iTerm";
	public static final String GAUGE_NAME_DEBUG_F3 = "debug f3: prevError";
	public static final String GAUGE_NAME_DEBUG_F4 = "debug f4: iParam";
	public static final String GAUGE_NAME_DEBUG_F5 = "debug f5: dParam";
	public static final String GAUGE_NAME_DEBUG_F6 = "debug f6: dTerm";
	public static final String GAUGE_NAME_DEBUG_F7 = "debug f7";
	public static final String GAUGE_NAME_DEBUG_I1 = "debug i1: pParam";
	public static final String GAUGE_NAME_DEBUG_I2 = "debug i2: offset";
	public static final String GAUGE_NAME_DEBUG_I3 = "debug i3";
	public static final String GAUGE_NAME_DEBUG_I4 = "debug i4";
	public static final String GAUGE_NAME_DEBUG_I5 = "debug i5";
	public static final String GAUGE_NAME_DESIRED_GEAR = "Desired Gear";
	public static final String GAUGE_NAME_DETECTED_GEAR = "Detected Gear";
	public static final String GAUGE_NAME_DWELL_DUTY = "dwell: coil duty cycle";
	public static final String GAUGE_NAME_ECU_TEMPERATURE = "ECU temperature";
	public static final String GAUGE_NAME_ENGINE_CRC16 = "Engine CRC16";
	public static final String GAUGE_NAME_ETB_DUTY = "ETB Duty";
	public static final String GAUGE_NAME_ETB_ERROR = "ETB position error";
	public static final String GAUGE_NAME_ETB_TARGET = "ETB position target";
	public static final String GAUGE_NAME_FLEX = "Flex Ethanol %";
	public static final String GAUGE_NAME_FUEL_BARO_CORR = "fuel: Barometric pressure correction";
	public static final String GAUGE_NAME_FUEL_BASE = "fuel: base mass";
	public static final String GAUGE_NAME_FUEL_CHARGE_TEMP = "fuel: Estimated charge temperature";
	public static final String GAUGE_NAME_FUEL_CLT_CORR = "fuel: CLT correction";
	public static final String GAUGE_NAME_FUEL_CONSUMPTION = "fuel: Total consumed";
	public static final String GAUGE_NAME_FUEL_CRANKING = "fuel: cranking";
	public static final String GAUGE_NAME_FUEL_EL_EXTRA = "fuel: engine load acceleration extra fuel";
	public static final String GAUGE_NAME_FUEL_FLOW = "fuel: Flow rate";
	public static final String GAUGE_NAME_FUEL_IAT_CORR = "fuel: IAT correction";
	public static final String GAUGE_NAME_FUEL_INJ_DUTY = "fuel: injector duty cycle";
	public static final String GAUGE_NAME_FUEL_LAST_INJECTION = "fuel: Last injection";
	public static final String GAUGE_NAME_FUEL_LEVEL = "fuel level";
	public static final String GAUGE_NAME_FUEL_LOAD = "fuel: load";
	public static final String GAUGE_NAME_FUEL_PRESSURE_HIGH = "Fuel pressure (high)";
	public static final String GAUGE_NAME_FUEL_PRESSURE_HIGH_UNITS = "bar";
	public static final String GAUGE_NAME_FUEL_PRESSURE_LOW = "Fuel pressure (low)";
	public static final String GAUGE_NAME_FUEL_PRESSURE_LOW_UNITS = "kPa";
	public static final String GAUGE_NAME_FUEL_RUNNING = "fuel: running";
	public static final String GAUGE_NAME_FUEL_TPS_EXTRA = "fuel: TPS acceleration extra fuel ms";
	public static final String GAUGE_NAME_FUEL_TPS_ROC = "fuel: TPS change";
	public static final String GAUGE_NAME_FUEL_TRIM = "fuel: fuel trim";
	public static final String GAUGE_NAME_FUEL_TRIM_2 = "fuel: fuel trim 2";
	public static final String GAUGE_NAME_FUEL_VE = "fuel: VE";
	public static final String GAUGE_NAME_FUEL_WALL_AMOUNT = "fuel: wall amount";
	public static final String GAUGE_NAME_FUEL_WALL_CORRECTION = "fuel: wall correction";
	public static final String GAUGE_NAME_FW_VERSION = "ECU Software Version";
	public static final String GAUGE_NAME_GEAR_RATIO = "Gearbox Ratio";
	public static final String GAUGE_NAME_IAC = "Idle Air Valve";
	public static final String GAUGE_NAME_IAT = "IAT";
	public static final String GAUGE_NAME_IDLE_POSITION = "Idle position sensor";
	public static final String GAUGE_NAME_IGNITION_LOAD = "ign: load";
	public static final String GAUGE_NAME_INJECTOR_LAG = "fuel: injector lag";
	public static final String GAUGE_NAME_KNOCK_1 = "knock 1";
	public static final String GAUGE_NAME_KNOCK_10 = "knock 10";
	public static final String GAUGE_NAME_KNOCK_11 = "knock 11";
	public static final String GAUGE_NAME_KNOCK_12 = "knock 12";
	public static final String GAUGE_NAME_KNOCK_2 = "knock 2";
	public static final String GAUGE_NAME_KNOCK_3 = "knock 3";
	public static final String GAUGE_NAME_KNOCK_4 = "knock 4";
	public static final String GAUGE_NAME_KNOCK_5 = "knock 5";
	public static final String GAUGE_NAME_KNOCK_6 = "knock 6";
	public static final String GAUGE_NAME_KNOCK_7 = "knock 7";
	public static final String GAUGE_NAME_KNOCK_8 = "knock 8";
	public static final String GAUGE_NAME_KNOCK_9 = "knock 9";
	public static final String GAUGE_NAME_KNOCK_COUNTER = "knock: counter";
	public static final String GAUGE_NAME_KNOCK_LEVEL = "knock: current level";
	public static final String GAUGE_NAME_LAMBDA = "Lambda";
	public static final String GAUGE_NAME_LAMBDA2 = "Lambda 2";
	public static final String GAUGE_NAME_LAST_ERROR = "Last error";
	public static final String GAUGE_NAME_MAF = "MAF";
	public static final String GAUGE_NAME_MAP = "MAP";
	public static final String GAUGE_NAME_OIL_PRESSURE = "Oil Pressure";
	public static final String GAUGE_NAME_OIL_PRESSURE_UNITS = "kPa";
	public static final String GAUGE_NAME_RAW_FUEL_PRESSURE_HIGH = "Fuel pressure raw (high)";
	public static final String GAUGE_NAME_RAW_FUEL_PRESSURE_LOW = "Fuel pressure raw (low)";
	public static final String GAUGE_NAME_RPM = "RPM";
	public static final String GAUGE_NAME_TARGET_AFR = "fuel: target AFR";
	public static final String GAUGE_NAME_TARGET_LAMBDA = "fuel: target lambda";
	public static final String GAUGE_NAME_TCHARGE = "fuel: SD tCharge";
	public static final String GAUGE_NAME_THROTTLE_PEDAL = "Throttle pedal position";
	public static final String GAUGE_NAME_TIME = "Time";
	public static final String GAUGE_NAME_TIMING_ADVANCE = "timing";
	public static final String GAUGE_NAME_TPS = "TPS";
	public static final String GAUGE_NAME_TPS2 = "TPS2";
	public static final String GAUGE_NAME_TRG_ERR = "Trigger Error Counter";
	public static final String GAUGE_NAME_TRG_GAP = "Trigger Sync Latest Ratio";
	public static final String GAUGE_NAME_TUNE_CRC16 = "Tune CRC16";
	public static final String GAUGE_NAME_TURBO_SPEED = "Turbocharger Speed";
	public static final String GAUGE_NAME_UPTIME = "Uptime";
	public static final String GAUGE_NAME_VBAT = "VBatt";
	public static final String GAUGE_NAME_VERSION = "firmware";
	public static final String GAUGE_NAME_VVS = "Vehicle Speed";
	public static final String GAUGE_NAME_VVT_B1E = "VVT: bank 1 exhaust";
	public static final String GAUGE_NAME_VVT_B1I = "VVT: bank 1 intake";
	public static final String GAUGE_NAME_VVT_B2E = "VVT: bank 2 exhaust";
	public static final String GAUGE_NAME_VVT_B2I = "VVT: bank 2 intake";
	public static final String GAUGE_NAME_VVT_TARGET_B1E = "VVT: bank 1 exhaust target";
	public static final String GAUGE_NAME_VVT_TARGET_B1I = "VVT: bank 1 intake target";
	public static final String GAUGE_NAME_VVT_TARGET_B2E = "VVT: bank 2 exhaust target";
	public static final String GAUGE_NAME_VVT_TARGET_B2I = "VVT: bank 2 intake target";
	public static final String GAUGE_NAME_WARNING_COUNT = "Warning count";
	public static final String GAUGE_NAME_WARNING_COUNTER = "warning: counter";
	public static final String GAUGE_NAME_WARNING_LAST = "warning: last";
	public static final String GAUGE_NAME_WG_POSITION = "Wastegate position sensor";
	public static final int GEARS_COUNT = 8;
	public static final int GPPWM_CHANNELS = 4;
	public static final int GPPWM_LOAD_COUNT = 8;
	public static final int GPPWM_NOTE_SIZE = 16;
	public static final int GPPWM_RPM_COUNT = 8;
	public static final int HPFP_COMPENSATION_SIZE = 10;
	public static final int HPFP_DEADTIME_SIZE = 8;
	public static final int HPFP_LOBE_PROFILE_SIZE = 16;
	public static final int HPFP_TARGET_SIZE = 10;
	public static final int HW_EVENT_TYPES = 6;
	public static final int HW_MAX_ADC_INDEX = 17;
	public static final int IAC_PID_MULT_SIZE = 8;
	public static final int IAT_CURVE_SIZE = 16;
	public static final int IDLE_ADVANCE_CURVE_SIZE = 8;
	public static final int IDLE_VE_SIZE = 4;
	public static final int IGN_LOAD_COUNT = 16;
	public static final int IGN_RPM_COUNT = 16;
	public static final String INDICATOR_NAME_AC_SWITCH = "AC switch";
	public static final String INDICATOR_NAME_BRAKE_DOWN = "brake: down";
	public static final String INDICATOR_NAME_CLUTCH_DOWN = "clutch: down";
	public static final String INDICATOR_NAME_CLUTCH_UP = "clutch: up";
	public static final int LE_COMMAND_LENGTH = 200;
	public static final String LOG_DELIMITER = "`";
	public static final int LOGIC_ANALYZER_CHANNEL_COUNT = 4;
	public static final int LUA_ANALOG_INPUT_COUNT = 8;
	public static final int LUA_PWM_COUNT = 8;
	public static final int LUA_SCRIPT_SIZE = 8000;
	public static final int MAF_DECODING_COUNT = 256;
	public static final String MAIN_HELP_URL = "http://www.rusefi.com/";
	public static final int MAP_ANGLE_SIZE = 8;
	public static final int MAP_WINDOW_SIZE = 8;
	public static final int MAX_CYLINDER_COUNT = 12;
	public static final int MLQ_FIELD_HEADER_SIZE = 55;
	public static final int MLQ_HEADER_SIZE = 22;
	public static final String MOCK_PPS_POSITION_COMMAND = "mock_pps_position";
	public static final String MOCK_PPS_VOLTAGE_COMMAND = "mock_pps_voltage";
	public static final int NARROW_BAND_WIDE_BAND_CONVERSION_SIZE = 8;
	public static final int PACK_ADD_TEMPERATURE = 40;
	public static final int PACK_MULT_AFR = 1000;
	public static final int PACK_MULT_AFR_CFG = 10;
	public static final int PACK_MULT_ANGLE = 50;
	public static final int PACK_MULT_FUEL_FLOW = 200;
	public static final int PACK_MULT_FUEL_MASS = 100;
	public static final int PACK_MULT_HIGH_PRESSURE = 10;
	public static final int PACK_MULT_LAMBDA = 10000;
	public static final int PACK_MULT_LAMBDA_CFG = 147;
	public static final int PACK_MULT_MAP_ESTIMATE = 100;
	public static final int PACK_MULT_MASS_FLOW = 10;
	public static final int PACK_MULT_MS = 300;
	public static final int PACK_MULT_PERCENT = 100;
	public static final int PACK_MULT_PRESSURE = 30;
	public static final int PACK_MULT_TEMPERATURE = 100;
	public static final int PACK_MULT_VOLTAGE = 1000;
	public static final int PEDAL_TO_TPS_SIZE = 8;
	public static final String PROTOCOL_ANALOG_CHART = "analog_chart";
	public static final String PROTOCOL_COIL1_SHORT_NAME = "c1";
	public static final String PROTOCOL_CRANK1 = "t1";
	public static final String PROTOCOL_CRANK2 = "t2";
	public static final String PROTOCOL_CRANK3 = "t3";
	public static final String PROTOCOL_ENGINE_SNIFFER = "wave_chart";
	public static final String PROTOCOL_ES_DOWN = "d";
	public static final String PROTOCOL_ES_UP = "u";
	public static final String PROTOCOL_HELLO_PREFIX = "***";
	public static final String PROTOCOL_HIP_NAME = "HIP";
	public static final String PROTOCOL_HPFP_NAME = "hpfp";
	public static final String PROTOCOL_INJ1_SHORT_NAME = "i1";
	public static final String PROTOCOL_MSG = "msg";
	public static final String PROTOCOL_OUTPIN = "outpin";
	public static final String PROTOCOL_SIGNATURE_PREFIX = "rusEFI ";
	public static final String PROTOCOL_TACH_NAME = "tach";
	public static final String PROTOCOL_TEST_RESPONSE_TAG = "ts_p_alive";
	public static final String PROTOCOL_VERSION_TAG = "rusEfiVersion";
	public static final String PROTOCOL_VVT1_NAME = "VVT1";
	public static final String PROTOCOL_VVT2_NAME = "VVT2";
	public static final String PROTOCOL_VVT3_NAME = "VVT3";
	public static final String PROTOCOL_VVT4_NAME = "VVT4";
	public static final String PROTOCOL_WA_CHANNEL_1 = "input1";
	public static final String PROTOCOL_WA_CHANNEL_2 = "input2";
	public static final String PROTOCOL_WA_CHANNEL_3 = "input3";
	public static final String PROTOCOL_WA_CHANNEL_4 = "input4";
	public static final int RPM_1_BYTE_PACKING_MULT = 50;
	public static final int SCRIPT_CURVE_16 = 16;
	public static final int SCRIPT_CURVE_8 = 8;
	public static final int SCRIPT_CURVE_COUNT = 6;
	public static final int SCRIPT_SETTING_COUNT = 8;
	public static final int SCRIPT_TABLE_8 = 8;
	public static final int SCRIPT_TABLE_COUNT = 4;
	public static final int SERVO_COUNT = 8;
	public static final int STFT_BANK_COUNT = 2;
	public static final int STFT_CELL_COUNT = 4;
	public static final int TCU_GEAR_COUNT = 10;
	public static final int TCU_SOLENOID_COUNT = 6;
	public static final int TOOTH_DATA_LENGTH = 2000;
	public static final int TOOTH_PACKET_COUNT = 1000;
	public static final int TOOTH_PACKET_SIZE = 2;
	public static final String TOP_DEAD_CENTER_MESSAGE = "r";
	public static final int TORQUE_CURVE_SIZE = 6;
	public static final int TPS_2_BYTE_PACKING_MULT = 100;
	public static final int TPS_TPS_ACCEL_TABLE = 8;
	public static final String TRIGGER_COMMENT = "#";
	public static final String TRIGGER_HARDCODED_OPERATION_MODE = "knownOperationMode";
	public static final String TRIGGER_HAS_SECOND_CHANNEL = "hasSecondChannel";
	public static final int TRIGGER_INPUT_PIN_COUNT = 3;
	public static final String TRIGGER_IS_CRANK_KEY = "crankBased";
	public static final String TRIGGER_IS_SECOND_WHEEL_CAM = "isSecondWheelCam";
	public static final int TRIGGER_SIMULATOR_PIN_COUNT = 3;
	public static final String TRIGGERS_FILE_NAME = "triggers.txt";
	public static final int TRIM_SIZE = 4;
	public static final char TS_BURN_COMMAND = 'B';
	public static final char TS_CHUNK_WRITE_COMMAND = 'C';
	public static final char TS_COMMAND_F = 'F';
	public static final int TS_COMPOSITE_DISABLE = 2;
	public static final int TS_COMPOSITE_ENABLE = 1;
	public static final char TS_CRC_CHECK_COMMAND = 'k';
	public static final char TS_EXECUTE = 'E';
	public static final int TS_FILE_VERSION = 20200310;
	public static final char TS_GET_COMPOSITE_BUFFER_DONE_DIFFERENTLY = '8';
	public static final char TS_GET_CONFIG_ERROR = 'e';
	public static final char TS_GET_FIRMWARE_VERSION = 'V';
	public static final char TS_GET_LOGGER_GET_BUFFER = 'L';
	public static final char TS_GET_OUTPUTS_SIZE = '4';
	public static final char TS_GET_STRUCT = '9';
	public static final char TS_GET_TEXT = 'G';
	public static final char TS_HELLO_COMMAND = 'S';
	public static final char TS_IO_TEST_COMMAND = 'Z';
	public static final char TS_ONLINE_PROTOCOL = 'z';
	public static final char TS_OUTPUT_COMMAND = 'O';
	public static final int TS_OUTPUT_SIZE = 640;
	public static final char TS_PAGE_COMMAND = 'P';
	public static final char TS_PERF_TRACE_BEGIN = '_';
	public static final char TS_PERF_TRACE_GET_BUFFER = 'b';
	public static final String TS_PROTOCOL = "001";
	public static final char TS_QUERY_COMMAND = 'Q';
	public static final char TS_READ_COMMAND = 'R';
	public static final int TS_RESPONSE_BURN_OK = 4;
	public static final int TS_RESPONSE_COMMAND_OK = 7;
	public static final int TS_RESPONSE_CRC_FAILURE = 0x82;
	public static final int TS_RESPONSE_FRAMING_ERROR = 0x8D;
	public static final int TS_RESPONSE_OK = 0;
	public static final int TS_RESPONSE_OUT_OF_RANGE = 0x84;
	public static final int TS_RESPONSE_UNDERRUN = 0x80;
	public static final int TS_RESPONSE_UNRECOGNIZED_COMMAND = 0x83;
	public static final char TS_SET_LOGGER_SWITCH = 'l';
	public static final char TS_SINGLE_WRITE_COMMAND = 'W';
	public static final char TS_TEST_COMMAND = 't';
	public static final int VBAT_INJECTOR_CURVE_SIZE = 8;
	public static final int VEHICLE_INFO_SIZE = 32;
	public static final int VM_VVT_INACTIVE = 0;
	public static final int VR_THRESHOLD_COUNT = 2;
	public static final int WWAE_TABLE_SIZE = 8;
	public static final Field RETARDTHRESHOLDRPM = Field.create("RETARDTHRESHOLDRPM", 0, FieldType.INT).setScale(1.0);
	public static final Field COMBINEDCONDITIONS = Field.create("COMBINEDCONDITIONS", 4, FieldType.BIT, 0);
	public static final Field LAUNCHACTIVATEPINSTATE = Field.create("LAUNCHACTIVATEPINSTATE", 4, FieldType.BIT, 1);
	public static final Field ISLAUNCHCONDITION = Field.create("ISLAUNCHCONDITION", 4, FieldType.BIT, 2);
	public static final Field ISSWITCHACTIVATED = Field.create("ISSWITCHACTIVATED", 4, FieldType.BIT, 3);
	public static final Field ISCLUTCHACTIVATED = Field.create("ISCLUTCHACTIVATED", 4, FieldType.BIT, 4);
	public static final Field ISVALIDINPUTPIN = Field.create("ISVALIDINPUTPIN", 4, FieldType.BIT, 5);
	public static final Field ACTIVATESWITCHCONDITION = Field.create("ACTIVATESWITCHCONDITION", 4, FieldType.BIT, 6);
	public static final Field RPMCONDITION = Field.create("RPMCONDITION", 4, FieldType.BIT, 7);
	public static final Field SPEEDCONDITION = Field.create("SPEEDCONDITION", 4, FieldType.BIT, 8);
	public static final Field TPSCONDITION = Field.create("TPSCONDITION", 4, FieldType.BIT, 9);
	public static final Field UNUSEDBIT_11_10 = Field.create("UNUSEDBIT_11_10", 4, FieldType.BIT, 10);
	public static final Field UNUSEDBIT_11_11 = Field.create("UNUSEDBIT_11_11", 4, FieldType.BIT, 11);
	public static final Field UNUSEDBIT_11_12 = Field.create("UNUSEDBIT_11_12", 4, FieldType.BIT, 12);
	public static final Field UNUSEDBIT_11_13 = Field.create("UNUSEDBIT_11_13", 4, FieldType.BIT, 13);
	public static final Field UNUSEDBIT_11_14 = Field.create("UNUSEDBIT_11_14", 4, FieldType.BIT, 14);
	public static final Field UNUSEDBIT_11_15 = Field.create("UNUSEDBIT_11_15", 4, FieldType.BIT, 15);
	public static final Field UNUSEDBIT_11_16 = Field.create("UNUSEDBIT_11_16", 4, FieldType.BIT, 16);
	public static final Field UNUSEDBIT_11_17 = Field.create("UNUSEDBIT_11_17", 4, FieldType.BIT, 17);
	public static final Field UNUSEDBIT_11_18 = Field.create("UNUSEDBIT_11_18", 4, FieldType.BIT, 18);
	public static final Field UNUSEDBIT_11_19 = Field.create("UNUSEDBIT_11_19", 4, FieldType.BIT, 19);
	public static final Field UNUSEDBIT_11_20 = Field.create("UNUSEDBIT_11_20", 4, FieldType.BIT, 20);
	public static final Field UNUSEDBIT_11_21 = Field.create("UNUSEDBIT_11_21", 4, FieldType.BIT, 21);
	public static final Field UNUSEDBIT_11_22 = Field.create("UNUSEDBIT_11_22", 4, FieldType.BIT, 22);
	public static final Field UNUSEDBIT_11_23 = Field.create("UNUSEDBIT_11_23", 4, FieldType.BIT, 23);
	public static final Field UNUSEDBIT_11_24 = Field.create("UNUSEDBIT_11_24", 4, FieldType.BIT, 24);
	public static final Field UNUSEDBIT_11_25 = Field.create("UNUSEDBIT_11_25", 4, FieldType.BIT, 25);
	public static final Field UNUSEDBIT_11_26 = Field.create("UNUSEDBIT_11_26", 4, FieldType.BIT, 26);
	public static final Field UNUSEDBIT_11_27 = Field.create("UNUSEDBIT_11_27", 4, FieldType.BIT, 27);
	public static final Field UNUSEDBIT_11_28 = Field.create("UNUSEDBIT_11_28", 4, FieldType.BIT, 28);
	public static final Field UNUSEDBIT_11_29 = Field.create("UNUSEDBIT_11_29", 4, FieldType.BIT, 29);
	public static final Field UNUSEDBIT_11_30 = Field.create("UNUSEDBIT_11_30", 4, FieldType.BIT, 30);
	public static final Field UNUSEDBIT_11_31 = Field.create("UNUSEDBIT_11_31", 4, FieldType.BIT, 31);
	public static final Field[] VALUES = {
	RETARDTHRESHOLDRPM,
	COMBINEDCONDITIONS,
	LAUNCHACTIVATEPINSTATE,
	ISLAUNCHCONDITION,
	ISSWITCHACTIVATED,
	ISCLUTCHACTIVATED,
	ISVALIDINPUTPIN,
	ACTIVATESWITCHCONDITION,
	RPMCONDITION,
	SPEEDCONDITION,
	TPSCONDITION,
	UNUSEDBIT_11_10,
	UNUSEDBIT_11_11,
	UNUSEDBIT_11_12,
	UNUSEDBIT_11_13,
	UNUSEDBIT_11_14,
	UNUSEDBIT_11_15,
	UNUSEDBIT_11_16,
	UNUSEDBIT_11_17,
	UNUSEDBIT_11_18,
	UNUSEDBIT_11_19,
	UNUSEDBIT_11_20,
	UNUSEDBIT_11_21,
	UNUSEDBIT_11_22,
	UNUSEDBIT_11_23,
	UNUSEDBIT_11_24,
	UNUSEDBIT_11_25,
	UNUSEDBIT_11_26,
	UNUSEDBIT_11_27,
	UNUSEDBIT_11_28,
	UNUSEDBIT_11_29,
	UNUSEDBIT_11_30,
	UNUSEDBIT_11_31,
	};
}
