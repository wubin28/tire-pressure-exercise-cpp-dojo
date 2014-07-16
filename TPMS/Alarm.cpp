/* 
 * File:   Alarm.cpp
 * Author: benwu
 * 
 * Created on July 16, 2014, 9:21 PM
 */

#include "Alarm.h"

void Alarm::check() {
  double psiPressureValue = sensor->popNextPressurePsiValue();

  if (psiPressureValue < LowPressureThreshold || HighPressureThreshold < psiPressureValue) {
    alarmOn = true;
  }
}

bool Alarm::isAlarmOn() {
  return alarmOn;
}

Alarm::Alarm() {
  // TODO: Depending on a concrete Sensor violates the Dependency Inversion Principle and Open-Closed Principle
  sensor = new Sensor;
  alarmOn = false;
}

const double Alarm::LowPressureThreshold = 17;
const double Alarm::HighPressureThreshold = 21;
