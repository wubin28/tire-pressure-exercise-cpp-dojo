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

void StubSensor::arrangeNextTwoPressureValues(double outOfRangePressureValue, double normalPressureValue) {
  this->pressureValues[0] = outOfRangePressureValue;
  this->pressureValues[1] = normalPressureValue;
}

double StubSensor::popNextPressurePsiValue() {
  return this->nextPressureValue;
}


double nextPressureValue = 0;