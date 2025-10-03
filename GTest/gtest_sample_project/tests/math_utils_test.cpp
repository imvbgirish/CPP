
#include <gtest/gtest.h>
#include "math_utils.h"

TEST(AdditionTest, HandlesPositiveNumbers) {
    EXPECT_EQ(add(2, 3), 5);
    EXPECT_NE(add(2, 2), 5);
}

TEST(SubtractionTest, HandlesBasicCase) {
    EXPECT_EQ(subtract(10, 4), 6);
}
