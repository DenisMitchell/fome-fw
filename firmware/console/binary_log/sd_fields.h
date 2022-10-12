static constexpr LogField fields[] = {
{packedTime, GAUGE_NAME_TIME, "sec", 0},
	{engine->outputChannels.RPMValue, "RPM", "RPM", 0},
	{engine->outputChannels.rpmAcceleration, "dRPM", "RPM/s", 2},
	{engine->outputChannels.speedToRpmRatio, "Gearbox Ratio", "value", 2},
	{engine->outputChannels.vehicleSpeedKph, "Vehicle Speed", "kph", 1},
	{engine->outputChannels.internalMcuTemperature, "CPU Temperature", "deg C", 0},
	{engine->outputChannels.coolant, "CLT", "deg C", 1},
	{engine->outputChannels.intake, "IAT", "deg C", 1},
	{engine->outputChannels.auxTemp1, "auxTemp1", "deg C", 1},
	{engine->outputChannels.auxTemp2, "auxTemp2", "deg C", 1},
	{engine->outputChannels.TPSValue, "TPS", "%", 2},
	{engine->outputChannels.throttlePedalPosition, "Throttle pedal position", "%", 2},
	{engine->outputChannels.tpsADC, "tpsADC", "ADC", 0},
	{engine->outputChannels.rawMaf, "rawMaf", "V", 3},
	{engine->outputChannels.mafMeasured, "MAF sensor", "kg/h", 1},
	{engine->outputChannels.MAPValue, "MAP", "kPa", 1},
	{engine->outputChannels.baroPressure, "baroPressure", "kPa", 1},
	{engine->outputChannels.lambdaValue, "Lambda", "", 3},
	{engine->outputChannels.knockRetard, "knock: retard", "deg", 1},
	{engine->outputChannels.idleCurrentPosition, "idleCurrentPosition", "%", 1},
	{engine->outputChannels.VBatt, "VBatt", "V", 2},
	{engine->outputChannels.oilPressure, "Oil Pressure", "kPa", 0},
	{engine->outputChannels.vvtPositionB1I, "VVT: bank 1 intake", "deg", 1},
	{engine->outputChannels.chargeAirMass, "air mass", "g", 3},
	{engine->outputChannels.crankingFuelMs, "crankingFuelMs", "ms", 2},
	{engine->outputChannels.currentTargetAfr, "fuel: target AFR", "ratio", 2},
	{engine->outputChannels.baseFuel, "fuel: base mass", "mg", 3},
	{engine->outputChannels.fuelRunning, "fuel: running", "mg", 3},
	{engine->outputChannels.actualLastInjection, "fuel: Last injection", "ms", 3},
	{engine->outputChannels.injectorDutyCycle, "fuel: injector duty cycle", "%", 0},
	{engine->outputChannels.veValue, "fuel: VE", "ratio", 1},
	{engine->outputChannels.injectionOffset, "injectionOffset", "deg", 0},
	{engine->outputChannels.tCharge, "tCharge", "deg C", 1},
	{engine->outputChannels.injectorLagMs, "fuel: injector lag", "ms", 3},
	{engine->outputChannels.engineMakeCodeNameCrc16, "Engine CRC16", "crc16", 0},
	{engine->outputChannels.wallFuelAmount, "fuel: wall amount", "mg", 3},
	{engine->outputChannels.wallFuelCorrection, "fuel: wall correction", "mg", 3},
	{engine->outputChannels.revolutionCounterSinceStart, "revolutionCounterSinceStart", "", 0},
	{engine->outputChannels.deltaTps, "fuel: TPS change", "ratio", 0},
	{engine->outputChannels.canReadCounter, "canReadCounter", "", 0},
	{engine->outputChannels.tpsAccelFuel, "fuel: TPS acceleration extra fuel ms", "ms", 3},
	{engine->outputChannels.ignitionAdvance, "timing", "deg", 1},
	{engine->outputChannels.sparkDwellValue, "dwell: coil charge time", "ms", 1},
	{engine->outputChannels.coilDutyCycle, "dwell: coil duty cycle", "%", 0},
	{engine->outputChannels.idleAirValvePosition, "Idle Air Valve", "%", 1},
	{engine->outputChannels.etbTarget, "ETB Target", "%", 2},
	{engine->outputChannels.etb1DutyCycle, "ETB Duty", "%", 1},
	{engine->outputChannels.etb1Error, "ETB Error", "%", 3},
	{engine->outputChannels.fuelTankLevel, "Fuel level", "%", 0},
	{engine->outputChannels.totalFuelConsumption, "fuel: Total consumed", "grams", 1},
	{engine->outputChannels.fuelFlowRate, "fuel: Flow rate", "gram/s", 3},
	{engine->outputChannels.veTableYAxis, "veTableYAxis", "%", 0},
	{engine->outputChannels.afrTableYAxis, "afrTableYAxis", "%", 0},
	{engine->outputChannels.knockLevel, "knock: current level", "Volts", 2},
	{engine->outputChannels.seconds, "Uptime", "sec", 0},
	{engine->outputChannels.engineMode, "Engine Mode", "em", 0},
	{engine->outputChannels.firmwareVersion, "firmware", "version_f", 0},
	{engine->outputChannels.rawIdlePositionSensor, "rawIdlePositionSensor", "V", 3},
	{engine->outputChannels.rawWastegatePosition, "rawWastegatePosition", "V", 3},
	{engine->outputChannels.tsConfigVersion, "tsConfigVersion", "", 0},
	{engine->outputChannels.calibrationValue, "calibrationValue", "", 0},
	{engine->outputChannels.calibrationMode, "calibrationMode", "", 0},
	{engine->outputChannels.idleTargetPosition, "idleTargetPosition", "", 0},
	{engine->outputChannels.totalTriggerErrorCounter, "Trigger Error Counter", "counter", 0},
	{engine->outputChannels.orderingErrorCounter, "orderingErrorCounter", "", 0},
	{engine->outputChannels.warningCounter, "warning: counter", "count", 0},
	{engine->outputChannels.lastErrorCode, "warning: last", "error", 0},
	{engine->outputChannels.recentErrorCode[0], "recentErrorCode 1", "error", 0},
	{engine->outputChannels.recentErrorCode[1], "recentErrorCode 2", "error", 0},
	{engine->outputChannels.recentErrorCode[2], "recentErrorCode 3", "error", 0},
	{engine->outputChannels.recentErrorCode[3], "recentErrorCode 4", "error", 0},
	{engine->outputChannels.recentErrorCode[4], "recentErrorCode 5", "error", 0},
	{engine->outputChannels.recentErrorCode[5], "recentErrorCode 6", "error", 0},
	{engine->outputChannels.recentErrorCode[6], "recentErrorCode 7", "error", 0},
	{engine->outputChannels.recentErrorCode[7], "recentErrorCode 8", "error", 0},
	{engine->outputChannels.debugFloatField1, "debugFloatField1", "val", 3},
	{engine->outputChannels.debugFloatField2, "debugFloatField2", "val", 3},
	{engine->outputChannels.debugFloatField3, "debugFloatField3", "val", 3},
	{engine->outputChannels.debugFloatField4, "debugFloatField4", "val", 3},
	{engine->outputChannels.debugFloatField5, "debugFloatField5", "val", 3},
	{engine->outputChannels.debugFloatField6, "debugFloatField6", "val", 3},
	{engine->outputChannels.debugFloatField7, "debugFloatField7", "val", 3},
	{engine->outputChannels.debugIntField1, "debugIntField1", "val", 0},
	{engine->outputChannels.debugIntField2, "debugIntField2", "val", 0},
	{engine->outputChannels.debugIntField3, "debugIntField3", "val", 0},
	{engine->outputChannels.debugIntField4, "debugIntField4", "val", 0},
	{engine->outputChannels.debugIntField5, "debugIntField5", "val", 0},
	{engine->outputChannels.accelerationX, "Acceleration: X", "G", 2},
	{engine->outputChannels.accelerationY, "Acceleration: Y", "G", 2},
	{engine->outputChannels.egt[0], "egt 1", "deg C", 0},
	{engine->outputChannels.egt[1], "egt 2", "deg C", 0},
	{engine->outputChannels.egt[2], "egt 3", "deg C", 0},
	{engine->outputChannels.egt[3], "egt 4", "deg C", 0},
	{engine->outputChannels.egt[4], "egt 5", "deg C", 0},
	{engine->outputChannels.egt[5], "egt 6", "deg C", 0},
	{engine->outputChannels.egt[6], "egt 7", "deg C", 0},
	{engine->outputChannels.egt[7], "egt 8", "deg C", 0},
	{engine->outputChannels.TPS2Value, "TPS2", "%", 2},
	{engine->outputChannels.rawTps1Primary, "rawTps1Primary", "V", 3},
	{engine->outputChannels.rawPpsPrimary, "rawPpsPrimary", "V", 3},
	{engine->outputChannels.rawClt, "rawClt", "V", 3},
	{engine->outputChannels.rawIat, "rawIat", "V", 3},
	{engine->outputChannels.rawOilPressure, "rawOilPressure", "V", 3},
	{engine->outputChannels.tuneCrc16, "Tune CRC16", "crc16", 0},
	{engine->outputChannels.fuelClosedLoopBinIdx, "fuelClosedLoopBinIdx", "", 0},
	{engine->outputChannels.tcuCurrentGear, "Current Gear", "gear", 0},
	{engine->outputChannels.rawPpsSecondary, "rawPpsSecondary", "V", 3},
	{engine->outputChannels.knock[0], "knock 1", "dBv", 0},
	{engine->outputChannels.knock[1], "knock 2", "dBv", 0},
	{engine->outputChannels.knock[2], "knock 3", "dBv", 0},
	{engine->outputChannels.knock[3], "knock 4", "dBv", 0},
	{engine->outputChannels.knock[4], "knock 5", "dBv", 0},
	{engine->outputChannels.knock[5], "knock 6", "dBv", 0},
	{engine->outputChannels.knock[6], "knock 7", "dBv", 0},
	{engine->outputChannels.knock[7], "knock 8", "dBv", 0},
	{engine->outputChannels.knock[8], "knock 9", "dBv", 0},
	{engine->outputChannels.knock[9], "knock 10", "dBv", 0},
	{engine->outputChannels.knock[10], "knock 11", "dBv", 0},
	{engine->outputChannels.knock[11], "knock 12", "dBv", 0},
	{engine->outputChannels.tcuDesiredGear, "Desired Gear", "gear", 0},
	{engine->outputChannels.flexPercent, "Flex Ethanol %", "%", 1},
	{engine->outputChannels.wastegatePositionSensor, "Wastegate position sensor", "%", 2},
	{engine->outputChannels.idlePositionSensor, "Idle position sensor", "%", 2},
	{engine->outputChannels.rawLowFuelPressure, "rawLowFuelPressure", "V", 3},
	{engine->outputChannels.rawHighFuelPressure, "rawHighFuelPressure", "V", 3},
	{engine->outputChannels.lowFuelPressure, "Fuel pressure (low)", "kpa", 0},
	{engine->outputChannels.highFuelPressure, "Fuel pressure (high)", "bar", 0},
	{engine->outputChannels.targetLambda, "fuel: target lambda", "", 3},
	{engine->outputChannels.AFRValue, "Air/Fuel Ratio", "AFR", 2},
	{engine->outputChannels.VssAcceleration, "Vss Accel", "m/s2", 2},
	{engine->outputChannels.lambdaValue2, "Lambda 2", "", 3},
	{engine->outputChannels.AFRValue2, "Air/Fuel Ratio 2", "AFR", 2},
	{engine->outputChannels.vvtPositionB1E, "VVT: bank 1 exhaust", "deg", 1},
	{engine->outputChannels.vvtPositionB2I, "VVT: bank 2 intake", "deg", 1},
	{engine->outputChannels.vvtPositionB2E, "VVT: bank 2 exhaust", "deg", 1},
	{engine->outputChannels.fuelPidCorrection[0], "fuelPidCorrection 1", "%", 2},
	{engine->outputChannels.fuelPidCorrection[1], "fuelPidCorrection 2", "%", 2},
	{engine->outputChannels.rawTps1Secondary, "rawTps1Secondary", "V", 3},
	{engine->outputChannels.rawTps2Primary, "rawTps2Primary", "V", 3},
	{engine->outputChannels.rawTps2Secondary, "rawTps2Secondary", "V", 3},
	{engine->outputChannels.knockCount, "knock: count", "", 0},
	{engine->outputChannels.accelerationZ, "Acceleration: Z", "G", 0},
	{engine->outputChannels.accelerationRoll, "Acceleration: Roll", "G", 0},
	{engine->outputChannels.accelerationYaw, "Acceleration: Yaw", "G", 0},
	{engine->outputChannels.vvtTargets[0], "vvtTargets 1", "deg", 0},
	{engine->outputChannels.vvtTargets[1], "vvtTargets 2", "deg", 0},
	{engine->outputChannels.vvtTargets[2], "vvtTargets 3", "deg", 0},
	{engine->outputChannels.vvtTargets[3], "vvtTargets 4", "deg", 0},
	{engine->outputChannels.turboSpeed, "Turbocharger Speed", "hz", 0},
	{engine->outputChannels.tps1Split, "tps1Split", "%", 2},
	{engine->outputChannels.tps2Split, "tps2Split", "%", 2},
	{engine->outputChannels.tps12Split, "tps12Split", "%", 2},
	{engine->outputChannels.accPedalSplit, "accPedalSplit", "%", 2},
	{engine->outputChannels.sparkCutReason, "Spark Cut Code", "code", 0},
	{engine->outputChannels.fuelCutReason, "Fuel Cut Code", "code", 0},
	{engine->outputChannels.mafEstimate, "MAF estimate", "kg/h", 0},
	{engine->outputChannels.instantRpm, "instantRpm", "rpm", 0},
	{engine->outputChannels.systemEventReuse, "systemEventReuse", "counter", 0},
	{engine->outputChannels.rawMap, "rawMap", "V", 3},
	{engine->outputChannels.rawAfr, "rawAfr", "V", 3},
	{engine->outputChannels.tpsAccelFrom, "tpsAccelFrom", "%", 0},
	{engine->outputChannels.tpsAccelTo, "tpsAccelTo", "%", 0},
	{engine->outputChannels.calibrationValue2, "calibrationValue2", "", 0},
	{engine->outputChannels.luaInvocationCounter, "luaInvocationCounter", "count", 0},
	{engine->outputChannels.luaLastCycleDuration, "luaLastCycleDuration", "nt", 0},
	{engine->outputChannels.testBenchIter, "testBenchIter", "count", 0},
	{engine->outputChannels.tcu_currentRange, "Current Range", "", 0},
	{engine->outputChannels.tcRatio, "Torque Converter Ratio", "value", 0},
	{engine->outputChannels.lastShiftTime, "lastShiftTime", "", -1},
	{engine->outputChannels.vssEdgeCounter, "vssEdgeCounter", "", -1},
	{engine->outputChannels.issEdgeCounter, "issEdgeCounter", "", -1},
	{engine->outputChannels.auxLinear1, "Aux Linear 1", "", 2},
	{engine->outputChannels.auxLinear2, "Aux Linear 2", "", 2},
	{engine->outputChannels.boostControllerOutput, "Boost Output", "%", 1},
	{engine->outputChannels.boostControllerOpenLoopPart, "Boost Open Loop", "%", 1},
	{engine->outputChannels.fallbackMap, "fallbackMap", "kPa", 1},
	{engine->outputChannels.detectedGear, "Detected Gear", "", 0},
	{engine->outputChannels.instantMAPValue, "Instant MAP", "kPa", 2},
	{engine->outputChannels.maxLockedDuration, "maxLockedDuration", "us", 0},
	{engine->outputChannels.maxTriggerReentrant, "maxTriggerReentrant", "", 0},
	{engine->outputChannels.canWriteOk, "canWriteOk", "", 3},
	{engine->outputChannels.canWriteNotOk, "canWriteNotOk", "", 3},
	{engine->outputChannels.triggerPrimaryFall, "triggerPrimaryFall", "", 3},
	{engine->outputChannels.triggerPrimaryRise, "triggerPrimaryRise", "", 3},
	{engine->outputChannels.triggerSecondaryFall, "triggerSecondaryFall", "", 3},
	{engine->outputChannels.triggerSecondaryRise, "triggerSecondaryRise", "", 3},
	{engine->outputChannels.triggerVvtFall, "triggerVvtFall", "", 3},
	{engine->outputChannels.triggerVvtRise, "triggerVvtRise", "", 3},
	{engine->outputChannels.starterState, "starterState", "", 3},
	{engine->outputChannels.starterRelayDisable, "starterRelayDisable", "", 3},
	{engine->outputChannels.multiSparkCounter, "multiSparkCounter", "", 3},
	{engine->outputChannels.pTerm, "alternatorStatus.pTerm", "", 2},
	{engine->outputChannels.iTerm, "alternatorStatus.iTerm", "", 2},
	{engine->outputChannels.dTerm, "alternatorStatus.dTerm", "", 2},
	{engine->outputChannels.output, "alternatorStatus.output", "", 2},
	{engine->outputChannels.error, "alternatorStatus.error", "", 2},
	{engine->outputChannels.resetCounter, "alternatorStatus.resetCounter", "", 0},
	{engine->outputChannels.pTerm, "idleStatus.pTerm", "", 2},
	{engine->outputChannels.iTerm, "idleStatus.iTerm", "", 2},
	{engine->outputChannels.dTerm, "idleStatus.dTerm", "", 2},
	{engine->outputChannels.output, "idleStatus.output", "", 2},
	{engine->outputChannels.error, "idleStatus.error", "", 2},
	{engine->outputChannels.resetCounter, "idleStatus.resetCounter", "", 0},
	{engine->outputChannels.pTerm, "etbStatus.pTerm", "", 2},
	{engine->outputChannels.iTerm, "etbStatus.iTerm", "", 2},
	{engine->outputChannels.dTerm, "etbStatus.dTerm", "", 2},
	{engine->outputChannels.output, "etbStatus.output", "", 2},
	{engine->outputChannels.error, "etbStatus.error", "", 2},
	{engine->outputChannels.resetCounter, "etbStatus.resetCounter", "", 0},
	{engine->outputChannels.pTerm, "boostStatus.pTerm", "", 2},
	{engine->outputChannels.iTerm, "boostStatus.iTerm", "", 2},
	{engine->outputChannels.dTerm, "boostStatus.dTerm", "", 2},
	{engine->outputChannels.output, "boostStatus.output", "", 2},
	{engine->outputChannels.error, "boostStatus.error", "", 2},
	{engine->outputChannels.resetCounter, "boostStatus.resetCounter", "", 0},
	{engine->outputChannels.auxSpeed1, "aux speed 1", "s", 0},
	{engine->outputChannels.auxSpeed2, "aux speed 2", "s", 0},
	{engine->outputChannels.ISSValue, "Input Shaft Speed", "RPM", 0},
	{engine->outputChannels.rawAnalogInput[0], "rawAnalogInput 1", "V", 3},
	{engine->outputChannels.rawAnalogInput[1], "rawAnalogInput 2", "V", 3},
	{engine->outputChannels.rawAnalogInput[2], "rawAnalogInput 3", "V", 3},
	{engine->outputChannels.rawAnalogInput[3], "rawAnalogInput 4", "V", 3},
	{engine->outputChannels.rawAnalogInput[4], "rawAnalogInput 5", "V", 3},
	{engine->outputChannels.rawAnalogInput[5], "rawAnalogInput 6", "V", 3},
	{engine->outputChannels.rawAnalogInput[6], "rawAnalogInput 7", "V", 3},
	{engine->outputChannels.rawAnalogInput[7], "rawAnalogInput 8", "V", 3},
	{engine->outputChannels.gppwmOutput[0], "GPPWM Output 1", "%", 2},
	{engine->outputChannels.gppwmOutput[1], "GPPWM Output 2", "%", 2},
	{engine->outputChannels.gppwmOutput[2], "GPPWM Output 3", "%", 2},
	{engine->outputChannels.gppwmOutput[3], "GPPWM Output 4", "%", 2},
	{engine->outputChannels.rawBattery, "rawBattery", "V", 3},
	{engine->outputChannels.extiOverflowCount, "extiOverflowCount", "", 0},
	{engine->outputChannels.ignBlendBias[0], "ignBlendBias 1", "%", 1},
	{engine->outputChannels.ignBlendBias[1], "ignBlendBias 2", "%", 1},
	{engine->outputChannels.ignBlendBias[2], "ignBlendBias 3", "%", 1},
	{engine->outputChannels.ignBlendBias[3], "ignBlendBias 4", "%", 1},
	{engine->outputChannels.ignBlendOutput[0], "ignBlendOutput 1", "deg", 2},
	{engine->outputChannels.ignBlendOutput[1], "ignBlendOutput 2", "deg", 2},
	{engine->outputChannels.ignBlendOutput[2], "ignBlendOutput 3", "deg", 2},
	{engine->outputChannels.ignBlendOutput[3], "ignBlendOutput 4", "deg", 2},
	{engine->outputChannels.outputRequestPeriod, "outputRequestPeriod", "", -1},
	{engine->outputChannels.mapFast, "mapFast", "", -1},
	{engine->outputChannels.unusedAtTheEnd[0], "unusedAtTheEnd 1", "", 0},
	{engine->outputChannels.unusedAtTheEnd[1], "unusedAtTheEnd 2", "", 0},
	{engine->outputChannels.unusedAtTheEnd[2], "unusedAtTheEnd 3", "", 0},
	{engine->outputChannels.unusedAtTheEnd[3], "unusedAtTheEnd 4", "", 0},
	{engine->outputChannels.unusedAtTheEnd[4], "unusedAtTheEnd 5", "", 0},
	{engine->outputChannels.unusedAtTheEnd[5], "unusedAtTheEnd 6", "", 0},
	{engine->outputChannels.unusedAtTheEnd[6], "unusedAtTheEnd 7", "", 0},
	{engine->outputChannels.unusedAtTheEnd[7], "unusedAtTheEnd 8", "", 0},
	{engine->outputChannels.unusedAtTheEnd[8], "unusedAtTheEnd 9", "", 0},
	{engine->outputChannels.unusedAtTheEnd[9], "unusedAtTheEnd 10", "", 0},
	{engine->outputChannels.unusedAtTheEnd[10], "unusedAtTheEnd 11", "", 0},
	{engine->outputChannels.unusedAtTheEnd[11], "unusedAtTheEnd 12", "", 0},
	{engine->outputChannels.unusedAtTheEnd[12], "unusedAtTheEnd 13", "", 0},
	{engine->outputChannels.unusedAtTheEnd[13], "unusedAtTheEnd 14", "", 0},
	{engine->outputChannels.unusedAtTheEnd[14], "unusedAtTheEnd 15", "", 0},
	{engine->outputChannels.unusedAtTheEnd[15], "unusedAtTheEnd 16", "", 0},
	{engine->outputChannels.unusedAtTheEnd[16], "unusedAtTheEnd 17", "", 0},
	{engine->outputChannels.unusedAtTheEnd[17], "unusedAtTheEnd 18", "", 0},
	{engine->outputChannels.unusedAtTheEnd[18], "unusedAtTheEnd 19", "", 0},
	{engine->outputChannels.unusedAtTheEnd[19], "unusedAtTheEnd 20", "", 0},
	{engine->outputChannels.unusedAtTheEnd[20], "unusedAtTheEnd 21", "", 0},
	{engine->outputChannels.unusedAtTheEnd[21], "unusedAtTheEnd 22", "", 0},
	{engine->outputChannels.unusedAtTheEnd[22], "unusedAtTheEnd 23", "", 0},
	{engine->outputChannels.unusedAtTheEnd[23], "unusedAtTheEnd 24", "", 0},
	{engine->outputChannels.unusedAtTheEnd[24], "unusedAtTheEnd 25", "", 0},
	{engine->outputChannels.unusedAtTheEnd[25], "unusedAtTheEnd 26", "", 0},
	{engine->outputChannels.unusedAtTheEnd[26], "unusedAtTheEnd 27", "", 0},
	{engine->outputChannels.unusedAtTheEnd[27], "unusedAtTheEnd 28", "", 0},
	{engine->outputChannels.unusedAtTheEnd[28], "unusedAtTheEnd 29", "", 0},
	{engine->outputChannels.unusedAtTheEnd[29], "unusedAtTheEnd 30", "", 0},
	{engine->outputChannels.unusedAtTheEnd[30], "unusedAtTheEnd 31", "", 0},
	{engine->outputChannels.unusedAtTheEnd[31], "unusedAtTheEnd 32", "", 0},
	{engine->outputChannels.unusedAtTheEnd[32], "unusedAtTheEnd 33", "", 0},
	{engine->outputChannels.unusedAtTheEnd[33], "unusedAtTheEnd 34", "", 0},
	{engine->outputChannels.unusedAtTheEnd[34], "unusedAtTheEnd 35", "", 0},
	{engine->outputChannels.unusedAtTheEnd[35], "unusedAtTheEnd 36", "", 0},
	{engine->outputChannels.unusedAtTheEnd[36], "unusedAtTheEnd 37", "", 0},
	{engine->outputChannels.unusedAtTheEnd[37], "unusedAtTheEnd 38", "", 0},
	{engine->outputChannels.unusedAtTheEnd[38], "unusedAtTheEnd 39", "", 0},
	{engine->outputChannels.unusedAtTheEnd[39], "unusedAtTheEnd 40", "", 0},
	{engine->outputChannels.unusedAtTheEnd[40], "unusedAtTheEnd 41", "", 0},
	{engine->outputChannels.unusedAtTheEnd[41], "unusedAtTheEnd 42", "", 0},
	{engine->outputChannels.unusedAtTheEnd[42], "unusedAtTheEnd 43", "", 0},
	{engine->outputChannels.unusedAtTheEnd[43], "unusedAtTheEnd 44", "", 0},
	{engine->outputChannels.unusedAtTheEnd[44], "unusedAtTheEnd 45", "", 0},
	{engine->outputChannels.unusedAtTheEnd[45], "unusedAtTheEnd 46", "", 0},
	{engine->outputChannels.unusedAtTheEnd[46], "unusedAtTheEnd 47", "", 0},
	{engine->outputChannels.unusedAtTheEnd[47], "unusedAtTheEnd 48", "", 0},
	{engine->outputChannels.unusedAtTheEnd[48], "unusedAtTheEnd 49", "", 0},
	{engine->outputChannels.unusedAtTheEnd[49], "unusedAtTheEnd 50", "", 0},
	{engine->outputChannels.unusedAtTheEnd[50], "unusedAtTheEnd 51", "", 0},
	{engine->outputChannels.unusedAtTheEnd[51], "unusedAtTheEnd 52", "", 0},
	{engine->outputChannels.unusedAtTheEnd[52], "unusedAtTheEnd 53", "", 0},
	{engine->outputChannels.unusedAtTheEnd[53], "unusedAtTheEnd 54", "", 0},
	{engine->outputChannels.unusedAtTheEnd[54], "unusedAtTheEnd 55", "", 0},
	{engine->outputChannels.unusedAtTheEnd[55], "unusedAtTheEnd 56", "", 0},
	{engine->outputChannels.unusedAtTheEnd[56], "unusedAtTheEnd 57", "", 0},
	{engine->outputChannels.unusedAtTheEnd[57], "unusedAtTheEnd 58", "", 0},
	{engine->outputChannels.unusedAtTheEnd[58], "unusedAtTheEnd 59", "", 0},
	{engine->outputChannels.unusedAtTheEnd[59], "unusedAtTheEnd 60", "", 0},
	{engine->outputChannels.unusedAtTheEnd[60], "unusedAtTheEnd 61", "", 0},
	{engine->outputChannels.unusedAtTheEnd[61], "unusedAtTheEnd 62", "", 0},
	{engine->outputChannels.unusedAtTheEnd[62], "unusedAtTheEnd 63", "", 0},
	{engine->outputChannels.unusedAtTheEnd[63], "unusedAtTheEnd 64", "", 0},
	{engine->outputChannels.unusedAtTheEnd[64], "unusedAtTheEnd 65", "", 0},
	{engine->outputChannels.unusedAtTheEnd[65], "unusedAtTheEnd 66", "", 0},
	{engine->outputChannels.unusedAtTheEnd[66], "unusedAtTheEnd 67", "", 0},
	{engine->outputChannels.unusedAtTheEnd[67], "unusedAtTheEnd 68", "", 0},
	{engine->outputChannels.unusedAtTheEnd[68], "unusedAtTheEnd 69", "", 0},
	{engine->outputChannels.unusedAtTheEnd[69], "unusedAtTheEnd 70", "", 0},
	{engine->outputChannels.unusedAtTheEnd[70], "unusedAtTheEnd 71", "", 0},
	{engine->outputChannels.unusedAtTheEnd[71], "unusedAtTheEnd 72", "", 0},
	{engine->outputChannels.unusedAtTheEnd[72], "unusedAtTheEnd 73", "", 0},
	{engine->outputChannels.unusedAtTheEnd[73], "unusedAtTheEnd 74", "", 0},
	{engine->outputChannels.unusedAtTheEnd[74], "unusedAtTheEnd 75", "", 0},
	{engine->outputChannels.unusedAtTheEnd[75], "unusedAtTheEnd 76", "", 0},
	{engine->outputChannels.unusedAtTheEnd[76], "unusedAtTheEnd 77", "", 0},
	{engine->outputChannels.unusedAtTheEnd[77], "unusedAtTheEnd 78", "", 0},
	{engine->outputChannels.unusedAtTheEnd[78], "unusedAtTheEnd 79", "", 0},
	{engine->outputChannels.unusedAtTheEnd[79], "unusedAtTheEnd 80", "", 0},
	{engine->outputChannels.unusedAtTheEnd[80], "unusedAtTheEnd 81", "", 0},
	{engine->outputChannels.unusedAtTheEnd[81], "unusedAtTheEnd 82", "", 0},
	{engine->outputChannels.unusedAtTheEnd[82], "unusedAtTheEnd 83", "", 0},
	{engine->outputChannels.unusedAtTheEnd[83], "unusedAtTheEnd 84", "", 0},
	{engine->outputChannels.unusedAtTheEnd[84], "unusedAtTheEnd 85", "", 0},
	{engine->outputChannels.unusedAtTheEnd[85], "unusedAtTheEnd 86", "", 0},
	{engine->outputChannels.unusedAtTheEnd[86], "unusedAtTheEnd 87", "", 0},
	{engine->outputChannels.unusedAtTheEnd[87], "unusedAtTheEnd 88", "", 0},
	{engine->outputChannels.unusedAtTheEnd[88], "unusedAtTheEnd 89", "", 0},
	{engine->outputChannels.unusedAtTheEnd[89], "unusedAtTheEnd 90", "", 0},
	{engine->outputChannels.unusedAtTheEnd[90], "unusedAtTheEnd 91", "", 0},
	{engine->outputChannels.unusedAtTheEnd[91], "unusedAtTheEnd 92", "", 0},
	{engine->outputChannels.unusedAtTheEnd[92], "unusedAtTheEnd 93", "", 0},
	{engine->outputChannels.unusedAtTheEnd[93], "unusedAtTheEnd 94", "", 0},
	{engine->outputChannels.unusedAtTheEnd[94], "unusedAtTheEnd 95", "", 0},
	{engine->outputChannels.unusedAtTheEnd[95], "unusedAtTheEnd 96", "", 0},
	{engine->outputChannels.unusedAtTheEnd[96], "unusedAtTheEnd 97", "", 0},
	{engine->outputChannels.unusedAtTheEnd[97], "unusedAtTheEnd 98", "", 0},
	{engine->outputChannels.unusedAtTheEnd[98], "unusedAtTheEnd 99", "", 0},
	{engine->outputChannels.unusedAtTheEnd[99], "unusedAtTheEnd 100", "", 0},
	{engine->outputChannels.unusedAtTheEnd[100], "unusedAtTheEnd 101", "", 0},
	{engine->outputChannels.unusedAtTheEnd[101], "unusedAtTheEnd 102", "", 0},
	{engine->outputChannels.unusedAtTheEnd[102], "unusedAtTheEnd 103", "", 0},
	{engine->outputChannels.unusedAtTheEnd[103], "unusedAtTheEnd 104", "", 0},
	{engine->outputChannels.unusedAtTheEnd[104], "unusedAtTheEnd 105", "", 0},
	{engine->outputChannels.unusedAtTheEnd[105], "unusedAtTheEnd 106", "", 0},
	{engine->outputChannels.unusedAtTheEnd[106], "unusedAtTheEnd 107", "", 0},
	{engine->outputChannels.unusedAtTheEnd[107], "unusedAtTheEnd 108", "", 0},
	{engine->outputChannels.unusedAtTheEnd[108], "unusedAtTheEnd 109", "", 0},
	{engine->outputChannels.unusedAtTheEnd[109], "unusedAtTheEnd 110", "", 0},
	{engine->outputChannels.unusedAtTheEnd[110], "unusedAtTheEnd 111", "", 0},
	{engine->outputChannels.unusedAtTheEnd[111], "unusedAtTheEnd 112", "", 0},
	{engine->outputChannels.unusedAtTheEnd[112], "unusedAtTheEnd 113", "", 0},
	{engine->outputChannels.unusedAtTheEnd[113], "unusedAtTheEnd 114", "", 0},
	{engine->outputChannels.unusedAtTheEnd[114], "unusedAtTheEnd 115", "", 0},
	{engine->outputChannels.unusedAtTheEnd[115], "unusedAtTheEnd 116", "", 0},
	{engine->outputChannels.unusedAtTheEnd[116], "unusedAtTheEnd 117", "", 0},
	{engine->outputChannels.unusedAtTheEnd[117], "unusedAtTheEnd 118", "", 0},
	{engine->outputChannels.unusedAtTheEnd[118], "unusedAtTheEnd 119", "", 0},
	{engine->outputChannels.unusedAtTheEnd[119], "unusedAtTheEnd 120", "", 0},
	{engine->outputChannels.unusedAtTheEnd[120], "unusedAtTheEnd 121", "", 0},
	{engine->outputChannels.unusedAtTheEnd[121], "unusedAtTheEnd 122", "", 0},
	{engine->outputChannels.unusedAtTheEnd[122], "unusedAtTheEnd 123", "", 0},
	{engine->outputChannels.unusedAtTheEnd[123], "unusedAtTheEnd 124", "", 0},
	{engine->outputChannels.unusedAtTheEnd[124], "unusedAtTheEnd 125", "", 0},
	{engine->outputChannels.unusedAtTheEnd[125], "unusedAtTheEnd 126", "", 0},
	{engine->outputChannels.unusedAtTheEnd[126], "unusedAtTheEnd 127", "", 0},
	{engine->outputChannels.unusedAtTheEnd[127], "unusedAtTheEnd 128", "", 0},
	{engine->outputChannels.unusedAtTheEnd[128], "unusedAtTheEnd 129", "", 0},
	{engine->outputChannels.unusedAtTheEnd[129], "unusedAtTheEnd 130", "", 0},
	{engine->outputChannels.unusedAtTheEnd[130], "unusedAtTheEnd 131", "", 0},
	{engine->outputChannels.unusedAtTheEnd[131], "unusedAtTheEnd 132", "", 0},
	{engine->outputChannels.unusedAtTheEnd[132], "unusedAtTheEnd 133", "", 0},
	{engine->outputChannels.unusedAtTheEnd[133], "unusedAtTheEnd 134", "", 0},
	{engine->outputChannels.unusedAtTheEnd[134], "unusedAtTheEnd 135", "", 0},
	{engine->outputChannels.unusedAtTheEnd[135], "unusedAtTheEnd 136", "", 0},
	{engine->outputChannels.unusedAtTheEnd[136], "unusedAtTheEnd 137", "", 0},
	{engine->outputChannels.unusedAtTheEnd[137], "unusedAtTheEnd 138", "", 0},
	{engine->outputChannels.unusedAtTheEnd[138], "unusedAtTheEnd 139", "", 0},
	{engine->outputChannels.unusedAtTheEnd[139], "unusedAtTheEnd 140", "", 0},
	{engine->outputChannels.unusedAtTheEnd[140], "unusedAtTheEnd 141", "", 0},
	{engine->outputChannels.unusedAtTheEnd[141], "unusedAtTheEnd 142", "", 0},
	{engine->outputChannels.unusedAtTheEnd[142], "unusedAtTheEnd 143", "", 0},
	{engine->outputChannels.unusedAtTheEnd[143], "unusedAtTheEnd 144", "", 0},
	{engine->outputChannels.unusedAtTheEnd[144], "unusedAtTheEnd 145", "", 0},
	{engine->outputChannels.unusedAtTheEnd[145], "unusedAtTheEnd 146", "", 0},
	{engine->outputChannels.unusedAtTheEnd[146], "unusedAtTheEnd 147", "", 0},
	{engine->outputChannels.unusedAtTheEnd[147], "unusedAtTheEnd 148", "", 0},
	{engine->outputChannels.unusedAtTheEnd[148], "unusedAtTheEnd 149", "", 0},
	{engine->outputChannels.unusedAtTheEnd[149], "unusedAtTheEnd 150", "", 0},
};
