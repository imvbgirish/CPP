
#include <gtest/gtest.h>

class StringFixture : public ::testing::Test {
protected:
    void SetUp() override {
        s = "hello";
    }
    std::string s;
};

TEST_F(StringFixture, LengthTest) {
    EXPECT_EQ(s.size(), 5);
}

TEST_F(StringFixture, StartsWithH) {
    EXPECT_EQ(s[0], 'h');
}
