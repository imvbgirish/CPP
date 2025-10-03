#include <gmock/gmock-matchers.h>
#include <gtest/gtest.h>
#include "calculator.h"
#include <iostream>


class CalculatorTest: public ::testing::Test{
protected:
    // Test interface
    void SetUp() override{
        std::cout << "SetUp Called" << std::endl;
    }
    void TearDown() override{
        std::cout << "TearDown Called" << std::endl;
    }
};

Calculator calculator;

TEST_F(CalculatorTest, AddFunction){
    EXPECT_EQ(calculator.add(1,4),5);
}

TEST_F(CalculatorTest, SubtractFunction){
    EXPECT_EQ(calculator.subtract(10,5),5);
}

TEST_F(CalculatorTest, MultiplyFunction){
    EXPECT_EQ(Calculator::multiply(2,3),6);
    // EXPECT_GT(Calculator::multiply(2,3),8);
}

TEST_F(CalculatorTest, DivideFunction){
    EXPECT_EQ(Calculator::divide(6,3),1);
}

TEST_F(CalculatorTest, IncrementFunction){
    EXPECT_EQ(calculator.getCount(), 4);
}
