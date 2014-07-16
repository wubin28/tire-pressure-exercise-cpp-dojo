/* 
 * File:   Sensor.cpp
 * Author: benwu
 * 
 * Created on July 16, 2014, 9:09 PM
 */

#include "Sensor.h"

double Sensor::popNextPressurePsiValue() {
  double pressureTelemetryValue;
  pressureTelemetryValue = samplePressure();

  return OFFSET + pressureTelemetryValue;
}

double Sensor::samplePressure() {
  // placeholder implementation that simulate a real sensor in a real tire
  static std::default_random_engine engine;
  static std::uniform_real_distribution<double> uniform(0, 1);
  double pressureTelemetryValue = 6 * uniform(engine) * uniform(engine);
  return pressureTelemetryValue;
}

const double Sensor::OFFSET = 16;
