/* 
 * File:   StubSensor.h
 * Author: benwu
 *
 * Created on July 17, 2014, 8:48 AM
 */

#ifndef STUBSENSOR_H
#define	STUBSENSOR_H

#include "Transducer.h"

class StubSensor : public Transducer {
public:
    void arrangeNextPressureValue(double nextPressureValue);
private:

};

#endif	/* STUBSENSOR_H */

