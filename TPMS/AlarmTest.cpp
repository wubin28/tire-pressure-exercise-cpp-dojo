#include "gtest/gtest.h"
 
TEST(AlarmTest, a_trivial_test) {
    EXPECT_EQ(5, 3 + 2);
}

// TODO-new-intent: a normal pressure value after a value outside the range should stop the alarm
