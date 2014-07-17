/* 
 * File:   Sensor.h
 * Author: benwu
 *
 * Created on July 16, 2014, 9:09 PM
 */

#ifndef SENSOR_H
#define	SENSOR_H

#include <random>
#include "Transducer.h"

class Sensor : public Transducer {
public:
  static const double OFFSET;
  double popNextPressurePsiValue() override;
private:
  static double samplePressure();
};

#endif	/* SENSOR_H */

