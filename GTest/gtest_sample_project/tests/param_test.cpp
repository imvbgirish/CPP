
#include <gtest/gtest.h>

class EvenNumberTest : public ::testing::TestWithParam<int> {};

TEST_P(EvenNumberTest, CheckEven) {
    int n = GetParam();
    EXPECT_EQ(n % 2, 0);
}

INSTANTIATE_TEST_SUITE_P(EvenValues, EvenNumberTest, ::testing::Values(2,4,6,8));
