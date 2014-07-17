/* 
 * File:   Alarm.cpp
 * Author: benwu
 * 
 * Created on July 16, 2014, 9:21 PM
 */

#include "Alarm.h"
#include "Transducer.h"

void Alarm::check() {
  alarmOn = false;
  double psiPressureValue = transducer->popNextPressurePsiValue();

  if (psiPressureValue < LOW_PRESSURE_THRESHOLD || HIGH_PRESSURE_THRESHOLD < psiPressureValue) {
    alarmOn = true;
  }
}

bool Alarm::isAlarmOn() {
  return alarmOn;
}

Alarm::Alarm() {
  Alarm(new Sensor);
}

Alarm::Alarm(Transducer *transducer) {
  this->transducer = transducer;
  alarmOn = false;
}

const double Alarm::LOW_PRESSURE_THRESHOLD = 17;
const double Alarm::HIGH_PRESSURE_THRESHOLD = 21;
