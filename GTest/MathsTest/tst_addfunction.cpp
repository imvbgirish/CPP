#include <gmock/gmock-matchers.h>
#include <gtest/gtest.h>
#include "math_utils.h"

using namespace testing;

TEST(NumberTest, AddFunction_Positive)
{
    Math_Utils math;
    EXPECT_EQ(math.add(2,3),5);
    EXPECT_LT(math.add(2,3),10);
}

TEST(Numberest, AddFunction_Negative)
{
    Math_Utils math;
    EXPECT_EQ(math.add(-2,-2),-4);
}
