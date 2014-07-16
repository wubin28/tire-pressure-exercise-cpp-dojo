#include "gtest/gtest.h"
 
// TODO-intent: a normal pressure value should not raise the alarm
TEST(AlarmTest, a_normal_pressure_value_should_not_raise_the_alarm) {
  
  // Assert
  EXPECT_FALSE(alarm->isAlarmOn());
}

// TODO-intent: a pressure value outside the range should raise the alarm
// TODO-new-intent: a normal pressure value after a value outside the range should stop the alarm
