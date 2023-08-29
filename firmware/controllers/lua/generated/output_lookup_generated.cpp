#if !EFI_UNIT_TEST
#include "pch.h"
#include "value_lookup.h"
float getOutputValueByName(const char *name) {
	int hash = djb2lowerCase(name);
	switch(hash) {
		case -230533156:
			return engine->outputChannels.sd_present;
		case 708639006:
			return engine->outputChannels.sd_logging_internal;
		case -770506808:
			return engine->outputChannels.triggerScopeReady;
		case 1155330306:
			return engine->outputChannels.antilagTriggered;
		case -1441751117:
			return engine->outputChannels.isFanOn;
		case 438683128:
			return engine->outputChannels.isO2HeaterOn;
		case -1790051911:
			return engine->outputChannels.checkEngine;
		case 1368986296:
			return engine->outputChannels.needBurn;
		case 459787871:
			return engine->outputChannels.sd_msd;
		case -333212891:
			return engine->outputChannels.isFan2On;
		case -1548941801:
			return engine->outputChannels.acrActive;
		case -1662199734:
			return engine->outputChannels.toothLogReady;
		case 14587330:
			return engine->outputChannels.isTpsError;
		case 518760558:
			return engine->outputChannels.isCltError;
		case 23640681:
			return engine->outputChannels.isMapError;
		case 1505102185:
			return engine->outputChannels.isIatError;
		case -1746157889:
			return engine->outputChannels.isTriggerError;
		case -2015383594:
			return engine->outputChannels.hasCriticalError;
		case -1919072851:
			return engine->outputChannels.isWarnNow;
		case -2035612655:
			return engine->outputChannels.isPedalError;
		case -52473827:
			return engine->outputChannels.launchTriggered;
		case -1529936844:
			return engine->outputChannels.isTps2Error;
		case 1608791711:
			return engine->outputChannels.injectorFault;
		case -1158382750:
			return engine->outputChannels.ignitionFault;
		case -822552576:
			return engine->outputChannels.isMainRelayOn;
		case 1836976702:
			return engine->outputChannels.isUsbConnected;
		case -622949795:
			return engine->outputChannels.dfcoActive;
		case 1699696209:
			return engine->outputChannels.RPMValue;
		case -968092482:
			return engine->outputChannels.rpmAcceleration;
		case -685727673:
			return engine->outputChannels.speedToRpmRatio;
		case -1925174695:
			return engine->outputChannels.vehicleSpeedKph;
		case -871891659:
			return engine->outputChannels.internalMcuTemperature;
		case -746111499:
			return engine->outputChannels.coolant;
		case 81034497:
			return engine->outputChannels.intake;
		case 1331305978:
			return engine->outputChannels.auxTemp1;
		case 1331305979:
			return engine->outputChannels.auxTemp2;
		case 1272048601:
			return engine->outputChannels.TPSValue;
		case -84435626:
			return engine->outputChannels.throttlePedalPosition;
		case 513859492:
			return engine->outputChannels.tpsADC;
		case 417956611:
			return engine->outputChannels.rawMaf;
		case -2032003569:
			return engine->outputChannels.mafMeasured;
		case 1281101952:
			return engine->outputChannels.MAPValue;
		case -2066867294:
			return engine->outputChannels.baroPressure;
		case -1119268893:
			return engine->outputChannels.lambdaValue;
		case -2096715875:
			return engine->outputChannels.knockRetard;
		case 277722310:
			return engine->outputChannels.VBatt;
		case 598268994:
			return engine->outputChannels.oilPressure;
		case 1384666006:
			return engine->outputChannels.vvtPositionB1I;
		case 681043126:
			return engine->outputChannels.actualLastInjection;
		case -354325031:
			return engine->outputChannels.injectorDutyCycle;
		case 1933507837:
			return engine->outputChannels.veValue;
		case -243031057:
			return engine->outputChannels.injectionOffset;
		case 1726931380:
			return engine->outputChannels.engineMakeCodeNameCrc16;
		case 115540725:
			return engine->outputChannels.wallFuelAmount;
		case -1511514122:
			return engine->outputChannels.wallFuelCorrectionValue;
		case -1555114948:
			return engine->outputChannels.revolutionCounterSinceStart;
		case 1247316691:
			return engine->outputChannels.canReadCounter;
		case -384925312:
			return engine->outputChannels.tpsAccelFuel;
		case -802608648:
			return engine->outputChannels.ignitionAdvance;
		case -3603666:
			return engine->outputChannels.currentIgnitionMode;
		case -921867120:
			return engine->outputChannels.currentInjectionMode;
		case 1029096098:
			return engine->outputChannels.coilDutyCycle;
		case -2105094009:
			return engine->outputChannels.etbTarget;
		case 1021133095:
			return engine->outputChannels.etb1DutyCycle;
		case 543832183:
			return engine->outputChannels.fuelTankLevel;
		case 1417905588:
			return engine->outputChannels.totalFuelConsumption;
		case 822501973:
			return engine->outputChannels.fuelFlowRate;
		case 686191307:
			return engine->outputChannels.TPS2Value;
		case -1158359776:
			return engine->outputChannels.tuneCrc16;
		case 710253075:
			return engine->outputChannels.knockLevel;
		case -1962923820:
			return engine->outputChannels.seconds;
		case -2073424832:
			return engine->outputChannels.engineMode;
		case 799075048:
			return engine->outputChannels.firmwareVersion;
		case 2039421097:
			return engine->outputChannels.rawWastegatePosition;
		case 633018087:
			return engine->outputChannels.accelerationX;
		case 633018088:
			return engine->outputChannels.accelerationY;
		case 283558758:
			return engine->outputChannels.detectedGear;
		case -1595441102:
			return engine->outputChannels.maxTriggerReentrant;
		case -148455898:
			return engine->outputChannels.rawLowFuelPressure;
		case 990714516:
			return engine->outputChannels.rawHighFuelPressure;
		case -628741220:
			return engine->outputChannels.lowFuelPressure;
		case -1973799222:
			return engine->outputChannels.highFuelPressure;
		case -1798336054:
			return engine->outputChannels.rawPpsSecondary;
		case 471298448:
			return engine->outputChannels.tcuDesiredGear;
		case 404628421:
			return engine->outputChannels.flexPercent;
		case 53406649:
			return engine->outputChannels.wastegatePositionSensor;
		case 1299611400:
			return engine->outputChannels.tsConfigVersion;
		case -1560670902:
			return engine->outputChannels.calibrationValue;
		case 1774505810:
			return engine->outputChannels.calibrationMode;
		case -2029665121:
			return engine->outputChannels.idleTargetPosition;
		case 2018173863:
			return engine->outputChannels.totalTriggerErrorCounter;
		case -1326404407:
			return engine->outputChannels.orderingErrorCounter;
		case 1492724763:
			return engine->outputChannels.warningCounter;
		case -1346040258:
			return engine->outputChannels.lastErrorCode;
		case 1240443767:
			return engine->outputChannels.debugFloatField1;
		case 1240443768:
			return engine->outputChannels.debugFloatField2;
		case 1240443769:
			return engine->outputChannels.debugFloatField3;
		case 1240443770:
			return engine->outputChannels.debugFloatField4;
		case 1240443771:
			return engine->outputChannels.debugFloatField5;
		case 1240443772:
			return engine->outputChannels.debugFloatField6;
		case 1240443773:
			return engine->outputChannels.debugFloatField7;
		case -183564276:
			return engine->outputChannels.debugIntField1;
		case -183564275:
			return engine->outputChannels.debugIntField2;
		case -183564274:
			return engine->outputChannels.debugIntField3;
		case -183564273:
			return engine->outputChannels.debugIntField4;
		case -183564272:
			return engine->outputChannels.debugIntField5;
		case -1051397637:
			return engine->outputChannels.rawTps1Primary;
		case -347083354:
			return engine->outputChannels.rawPpsPrimary;
		case 417946098:
			return engine->outputChannels.rawClt;
		case 417952269:
			return engine->outputChannels.rawIat;
		case 2070002124:
			return engine->outputChannels.rawOilPressure;
		case 1342844099:
			return engine->outputChannels.fuelClosedLoopBinIdx;
		case -559761101:
			return engine->outputChannels.tcuCurrentGear;
		case -1093429509:
			return engine->outputChannels.AFRValue;
		case -513494613:
			return engine->outputChannels.VssAcceleration;
		case 1718832245:
			return engine->outputChannels.lambdaValue2;
		case -1723435379:
			return engine->outputChannels.AFRValue2;
		case 1384666002:
			return engine->outputChannels.vvtPositionB1E;
		case 1384666039:
			return engine->outputChannels.vvtPositionB2I;
		case 1384666035:
			return engine->outputChannels.vvtPositionB2E;
		case 2555743:
			return engine->outputChannels.rawTps1Secondary;
		case -1382627620:
			return engine->outputChannels.rawTps2Primary;
		case 70357120:
			return engine->outputChannels.rawTps2Secondary;
		case 699938372:
			return engine->outputChannels.knockCount;
		case 633018089:
			return engine->outputChannels.accelerationZ;
		case -1670865464:
			return engine->outputChannels.accelerationRoll;
		case -2133033504:
			return engine->outputChannels.accelerationYaw;
		case -4187390:
			return engine->outputChannels.turboSpeed;
		case 644036825:
			return engine->outputChannels.tps1Split;
		case 683172218:
			return engine->outputChannels.tps2Split;
		case 1533250027:
			return engine->outputChannels.tps12Split;
		case 864210494:
			return engine->outputChannels.accPedalSplit;
		case -56739846:
			return engine->outputChannels.sparkCutReason;
		case -1225000603:
			return engine->outputChannels.fuelCutReason;
		case -2045040875:
			return engine->outputChannels.mafEstimate;
		case -658597643:
			return engine->outputChannels.instantRpm;
		case 417956621:
			return engine->outputChannels.rawMap;
		case 417943720:
			return engine->outputChannels.rawAfr;
		case 37467836:
			return engine->outputChannels.calibrationValue2;
		case 1766132801:
			return engine->outputChannels.luaInvocationCounter;
		case 823476017:
			return engine->outputChannels.luaLastCycleDuration;
		case -518694176:
			return engine->outputChannels.tcu_currentRange;
		case -732434245:
			return engine->outputChannels.tcRatio;
		case 174310950:
			return engine->outputChannels.lastShiftTime;
		case 385418550:
			return engine->outputChannels.vssEdgeCounter;
		case 347478025:
			return engine->outputChannels.issEdgeCounter;
		case 803810399:
			return engine->outputChannels.auxLinear1;
		case 803810400:
			return engine->outputChannels.auxLinear2;
		case -940825965:
			return engine->outputChannels.fallbackMap;
		case -1162308767:
			return engine->outputChannels.instantMAPValue;
		case -558968637:
			return engine->outputChannels.maxLockedDuration;
		case 1193280444:
			return engine->outputChannels.canWriteOk;
		case 1964920685:
			return engine->outputChannels.canWriteNotOk;
		case 248437820:
			return engine->outputChannels.triggerPrimaryFall;
		case 248878000:
			return engine->outputChannels.triggerPrimaryRise;
		case 1016089632:
			return engine->outputChannels.triggerSecondaryFall;
		case 1016529812:
			return engine->outputChannels.triggerSecondaryRise;
		case 1537196344:
			return engine->outputChannels.triggerVvtFall;
		case 1537636524:
			return engine->outputChannels.triggerVvtRise;
		case -1438648277:
			return engine->outputChannels.starterState;
		case 1286045659:
			return engine->outputChannels.starterRelayDisable;
		case 680091441:
			return engine->outputChannels.multiSparkCounter;
		case 1630166812:
			return engine->outputChannels.extiOverflowCount;
		case -1097329029:
			return engine->outputChannels.alternatorStatus.pTerm;
		case -1105630476:
			return engine->outputChannels.alternatorStatus.iTerm;
		case -1111560081:
			return engine->outputChannels.alternatorStatus.dTerm;
		case -1889531804:
			return engine->outputChannels.alternatorStatus.output;
		case -1110431971:
			return engine->outputChannels.alternatorStatus.error;
		case -1254008074:
			return engine->outputChannels.alternatorStatus.resetCounter;
		case -1798819555:
			return engine->outputChannels.idleStatus.pTerm;
		case -1807121002:
			return engine->outputChannels.idleStatus.iTerm;
		case -1813050607:
			return engine->outputChannels.idleStatus.dTerm;
		case 731084614:
			return engine->outputChannels.idleStatus.output;
		case -1811922497:
			return engine->outputChannels.idleStatus.error;
		case -424088744:
			return engine->outputChannels.idleStatus.resetCounter;
		case -41846406:
			return engine->outputChannels.etbStatus.pTerm;
		case -50147853:
			return engine->outputChannels.etbStatus.iTerm;
		case -56077458:
			return engine->outputChannels.etbStatus.dTerm;
		case -1418343613:
			return engine->outputChannels.etbStatus.output;
		case -54949348:
			return engine->outputChannels.etbStatus.error;
		case 2098956565:
			return engine->outputChannels.etbStatus.resetCounter;
		case 407130790:
			return engine->outputChannels.boostStatus.pTerm;
		case 398829343:
			return engine->outputChannels.boostStatus.iTerm;
		case 392899738:
			return engine->outputChannels.boostStatus.dTerm;
		case 513001967:
			return engine->outputChannels.boostStatus.output;
		case 394027848:
			return engine->outputChannels.boostStatus.error;
		case 308336833:
			return engine->outputChannels.boostStatus.resetCounter;
		case 1569192907:
			return engine->outputChannels.wastegateDcStatus.pTerm;
		case 1560891460:
			return engine->outputChannels.wastegateDcStatus.iTerm;
		case 1554961855:
			return engine->outputChannels.wastegateDcStatus.dTerm;
		case 206346164:
			return engine->outputChannels.wastegateDcStatus.output;
		case 1556089965:
			return engine->outputChannels.wastegateDcStatus.error;
		case 156247622:
			return engine->outputChannels.wastegateDcStatus.resetCounter;
		case 957036309:
			return engine->outputChannels.auxSpeed1;
		case 957036310:
			return engine->outputChannels.auxSpeed2;
		case 200047729:
			return engine->outputChannels.ISSValue;
		case 1520918538:
			return engine->outputChannels.rawBattery;
		case -1124698530:
			return engine->outputChannels.coilState1;
		case -1124698529:
			return engine->outputChannels.coilState2;
		case -1124698528:
			return engine->outputChannels.coilState3;
		case -1124698527:
			return engine->outputChannels.coilState4;
		case -1124698526:
			return engine->outputChannels.coilState5;
		case -1124698525:
			return engine->outputChannels.coilState6;
		case -1124698524:
			return engine->outputChannels.coilState7;
		case -1124698523:
			return engine->outputChannels.coilState8;
		case -1124698522:
			return engine->outputChannels.coilState9;
		case 1539654222:
			return engine->outputChannels.coilState10;
		case 1539654223:
			return engine->outputChannels.coilState11;
		case 1539654224:
			return engine->outputChannels.coilState12;
		case 2081101045:
			return engine->outputChannels.injectorState1;
		case 2081101046:
			return engine->outputChannels.injectorState2;
		case 2081101047:
			return engine->outputChannels.injectorState3;
		case 2081101048:
			return engine->outputChannels.injectorState4;
		case 2081101049:
			return engine->outputChannels.injectorState5;
		case 2081101050:
			return engine->outputChannels.injectorState6;
		case 2081101051:
			return engine->outputChannels.injectorState7;
		case 2081101052:
			return engine->outputChannels.injectorState8;
		case 2081101053:
			return engine->outputChannels.injectorState9;
		case -43142203:
			return engine->outputChannels.injectorState10;
		case -43142202:
			return engine->outputChannels.injectorState11;
		case -43142201:
			return engine->outputChannels.injectorState12;
		case 1894184322:
			return engine->outputChannels.outputRequestPeriod;
		case -1263258735:
			return engine->outputChannels.mapFast;
		case 907666325:
			return engine->outputChannels.rawMaf2;
		case 1663359009:
			return engine->outputChannels.mafMeasured2;
		case 967311941:
			return engine->outputChannels.schedulingUsedCount;
		case 2090288615:
			return engine->outputChannels.Gego;
		case 1092959609:
			return engine->outputChannels.testBenchIter;
		case -1779658835:
			return engine->fuelComputer.totalFuelCorrection;
		case -1288205717:
			return engine->fuelComputer.running.postCrankingFuelCorrection;
		case 197173469:
			return engine->fuelComputer.running.intakeTemperatureCoefficient;
		case 1822238385:
			return engine->fuelComputer.running.coolantTemperatureCoefficient;
		case 526786951:
			return engine->fuelComputer.running.timeSinceCrankingInSecs;
		case -42886021:
			return engine->fuelComputer.running.baseFuel;
		case -794283008:
			return engine->fuelComputer.running.fuel;
		case 995190836:
			return engine->fuelComputer.afrTableYAxis;
		case -734904659:
			return engine->fuelComputer.targetLambda;
		case 2122891301:
			return engine->fuelComputer.targetAFR;
		case 341978922:
			return engine->fuelComputer.stoichiometricRatio;
		case 1417236183:
			return engine->fuelComputer.sdTcharge_coff;
		case 1650433343:
			return engine->fuelComputer.sdAirMassInOneCylinder;
		case -1777838088:
			return engine->ignitionState.baseDwell;
		case -903101570:
			return engine->ignitionState.sparkDwell;
		case -1573373756:
			return engine->ignitionState.dwellAngle;
		case 256951528:
			return engine->ignitionState.cltTimingCorrection;
		case -1886479485:
			return engine->ignitionState.timingIatCorrection;
		case -319326974:
			return engine->ignitionState.timingPidCorrection;
		case -80612537:
			return engine->ignitionState.dwellVoltageCorrection;
		case -309610760:
			return engine->ignitionState.luaTimingAdd;
		case -1626770351:
			return engine->ignitionState.luaTimingMult;
#if EFI_BOOST_CONTROL
		case -575666209:
			return engine->boostController.isTpsInvalid;
#endif
#if EFI_BOOST_CONTROL
		case 1846215200:
			return engine->boostController.m_shouldResetPid;
#endif
#if EFI_BOOST_CONTROL
		case 1826317915:
			return engine->boostController.isBelowClosedLoopThreshold;
#endif
#if EFI_BOOST_CONTROL
		case -1642402810:
			return engine->boostController.isNotClosedLoop;
#endif
#if EFI_BOOST_CONTROL
		case 2111912944:
			return engine->boostController.isZeroRpm;
#endif
#if EFI_BOOST_CONTROL
		case -2011570052:
			return engine->boostController.hasInitBoost;
#endif
#if EFI_BOOST_CONTROL
		case 193830616:
			return engine->boostController.rpmTooLow;
#endif
#if EFI_BOOST_CONTROL
		case -1033638560:
			return engine->boostController.tpsTooLow;
#endif
#if EFI_BOOST_CONTROL
		case -734877977:
			return engine->boostController.mapTooLow;
#endif
#if EFI_BOOST_CONTROL
		case 119157463:
			return engine->boostController.luaTargetAdd;
#endif
#if EFI_BOOST_CONTROL
		case 1239062717:
			return engine->boostController.boostOutput;
#endif
#if EFI_BOOST_CONTROL
		case -362320880:
			return engine->boostController.luaTargetMult;
#endif
#if EFI_BOOST_CONTROL
		case -1481117304:
			return engine->boostController.openLoopPart;
#endif
#if EFI_BOOST_CONTROL
		case 1944984220:
			return engine->boostController.luaOpenLoopAdd;
#endif
#if EFI_BOOST_CONTROL
		case -707712709:
			return engine->boostController.boostControllerClosedLoopPart;
#endif
#if EFI_BOOST_CONTROL
		case -1712045196:
			return engine->boostController.boostControlTarget;
#endif
		case 182391090:
			return ___engine.module<FanControl1>()->cranking;
		case -496961865:
			return ___engine.module<FanControl1>()->notRunning;
		case 142778571:
			return ___engine.module<FanControl1>()->disabledWhileEngineStopped;
		case 545954889:
			return ___engine.module<FanControl1>()->brokenClt;
		case 291043035:
			return ___engine.module<FanControl1>()->enabledForAc;
		case 193494032:
			return ___engine.module<FanControl1>()->hot;
		case 2090155911:
			return ___engine.module<FanControl1>()->cold;
		case 1649801578:
			return engine->engineState.lua.fuelAdd;
		case -1390672637:
			return engine->engineState.lua.fuelMult;
		case -427776066:
			return engine->engineState.lua.clutchUpState;
		case -1296201087:
			return engine->engineState.lua.brakePedalState;
		case 1517904291:
			return engine->engineState.lua.acRequestState;
		case 2055342630:
			return engine->engineState.lua.luaDisableEtb;
		case -802271455:
			return engine->engineState.lua.luaIgnCut;
		case -893334680:
			return engine->engineState.sd.tCharge;
		case 584726739:
			return engine->engineState.sd.tChargeK;
		case -1206067863:
			return engine->engineState.crankingFuel.coolantTemperatureCoefficient;
		case 20251202:
			return engine->engineState.crankingFuel.tpsCoefficient;
		case 1541006353:
			return engine->engineState.crankingFuel.durationCoefficient;
		case -180401224:
			return engine->engineState.crankingFuel.fuel;
		case -281693247:
			return engine->engineState.baroCorrection;
		case -295556270:
			return engine->engineState.hellenBoardId;
		case -797965330:
			return engine->engineState.clutchUpState;
		case 724244513:
			return engine->engineState.clutchDownState;
		case -705383759:
			return engine->engineState.brakePedalState;
		case 897099930:
			return engine->engineState.startStopState;
		case -960645892:
			return engine->engineState.startStopStateToggleCounter;
		case -244414221:
			return engine->engineState.egtValue1;
		case -244414220:
			return engine->engineState.egtValue2;
		case -505351565:
			return engine->engineState.desiredRpmLimit;
		case -1839290700:
			return engine->engineState.fuelInjectionCounter;
		case -1515591290:
			return engine->engineState.sparkCounter;
		case 583799407:
			return engine->engineState.fuelingLoad;
		case 1136482406:
			return engine->engineState.ignitionLoad;
		case 1568071542:
			return engine->engineState.veTableYAxis;
#if EFI_SHAFT_POSITION_INPUT
		case 477303734:
			return engine->triggerCentral.vvtCamCounter;
#endif
#if EFI_SHAFT_POSITION_INPUT
		case -1727829859:
			return engine->triggerCentral.mapVvt_MAP_AT_SPECIAL_POINT;
#endif
#if EFI_SHAFT_POSITION_INPUT
		case -1585778708:
			return engine->triggerCentral.mapVvt_MAP_AT_DIFF;
#endif
#if EFI_SHAFT_POSITION_INPUT
		case 1637661099:
			return engine->triggerCentral.mapVvt_MAP_AT_CYCLE_COUNT;
#endif
#if EFI_SHAFT_POSITION_INPUT
		case 845799744:
			return engine->triggerCentral.mapVvt_map_peak;
#endif
#if EFI_SHAFT_POSITION_INPUT
		case 162105111:
			return engine->triggerCentral.currentEngineDecodedPhase;
#endif
#if EFI_SHAFT_POSITION_INPUT
		case -280624712:
			return engine->triggerCentral.triggerToothAngleError;
#endif
#if EFI_SHAFT_POSITION_INPUT
		case 989545496:
			return engine->triggerCentral.triggerIgnoredToothCount;
#endif
		case 1242329357:
			return engine->dc_motors.dcOutput0;
		case -1236599226:
			return engine->dc_motors.isEnabled0_int;
		case 1691876092:
			return engine->dc_motors.isEnabled0;
		case -2132393748:
			return ___engine.module<VvtController1>()->vvtTarget;
		case 1990697206:
			return ___engine.module<VvtController1>()->vvtOutput;
		case 350535927:
			return ___engine.lambdaMonitor.lambdaCurrentlyGood;
		case 1849938842:
			return ___engine.lambdaMonitor.lambdaMonitorCut;
		case 481450608:
			return ___engine.lambdaMonitor.lambdaTimeSinceGood;
	}
	return EFI_ERROR_CODE;
}
#endif
