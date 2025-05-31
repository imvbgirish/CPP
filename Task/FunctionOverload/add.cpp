#include "add.h"
#include <iostream>

Add::Add() {}

Add::~Add()
{

}

void Add::add(int value1, int value2)
{
    float result = value1 + value2;
    std::cout << result << std::endl;
}

void Add::add(float value1, float value2)
{
    int result = value1 + value2;
    std::cout << result << std::endl;
}

void Add::add(int value1, double value2)
{
    int result = value1 + value2;
    std::cout << result << std::endl;
}
