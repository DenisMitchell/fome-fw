/**
 * @file pid.h
 *
 * @date Sep 16, 2014
 * @author Andrey Belomutskiy, (c) 2012-2014
 */

#ifndef PID_H_
#define PID_H_

class Pid {

public:
	Pid(float pFactor, float iFactor, float dFactor, float minResult, float maxResult);
	float getValue(float target, float input, float dTime);

private:
	float pFactor;
	float iFactor;
	float dFactor;
	float minResult;
	float maxResult;

	float integration;
	float prevError;

};

#endif /* PID_H_ */
