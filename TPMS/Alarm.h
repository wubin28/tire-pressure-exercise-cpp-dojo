/* 
 * File:   Alarm.h
 * Author: benwu
 *
 * Created on July 16, 2014, 9:21 PM
 */

#ifndef ALARM_H
#define  ALARM_H

#include "Sensor.h"
#include "Transducer.h"

class Alarm {
public:
  Alarm();
  Alarm(Transducer *transducer);
  void check();
  bool isAlarmOn();
  static const double LOW_PRESSURE_THRESHOLD;
  static const double HIGH_PRESSURE_THRESHOLD;
private:
  Sensor* sensor;
  bool alarmOn;
};

#endif  /* ALARM_H */

