#include "gtest/gtest.h"
#include "StubSensor.h"
#include "Alarm.h"
 
TEST(AlarmTest, a_normal_pressure_value_should_not_raise_the_alarm) {
  // Arrange
  StubSensor *stubSensor = new StubSensor;
  stubSensor->arrangeNextPressureValue(Alarm::HIGH_PRESSURE_THRESHOLD);
  Alarm *alarm = new Alarm(stubSensor);
  
  // Act
  alarm->check();
  
  // Assert
  EXPECT_FALSE(alarm->isAlarmOn());
}

// TODO-intent-working-on: a pressure value outside the range should raise the alarm
TEST(AlarmTest, a_pressure_value_outside_the_range_should_raise_the_alarm) {
  // Assert
  EXPECT_TRUE(alarm->isAlarmOn());
}

// TODO-new-intent: a normal pressure value after a value outside the range should stop the alarm
