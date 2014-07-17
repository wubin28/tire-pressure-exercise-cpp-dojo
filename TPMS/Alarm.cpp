/* 
 * File:   Alarm.cpp
 * Author: benwu
 * 
 * Created on July 16, 2014, 9:21 PM
 */

#include "Alarm.h"
#include "Transducer.h"

void Alarm::check() {
  double psiPressureValue = sensor->popNextPressurePsiValue();

  if (psiPressureValue < LOW_PRESSURE_THRESHOLD || HIGH_PRESSURE_THRESHOLD < psiPressureValue) {
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

Alarm::Alarm(Transducer *transducer) {
  
}

const double Alarm::LOW_PRESSURE_THRESHOLD = 17;
const double Alarm::HIGH_PRESSURE_THRESHOLD = 21;
