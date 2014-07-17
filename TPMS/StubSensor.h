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
  void arrangeNextTwoPressureValues(double outOfRangePressureValue, double normalPressureValue);
  double popNextPressurePsiValue() override;
private:
  double nextPressureValue;
  double pressureValues[2] = {0, 0};
};

#endif	/* STUBSENSOR_H */

