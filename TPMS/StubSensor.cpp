/* 
 * File:   StubSensor.cpp
 * Author: benwu
 * 
 * Created on July 17, 2014, 8:48 AM
 */

#include "StubSensor.h"

void StubSensor::arrangeNextPressureValue(double nextPressureValue) {
  this->nextPressureValue = nextPressureValue;
}

double nextPressureValue = 0;