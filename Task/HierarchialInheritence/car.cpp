#include "car.h"
#include <iostream>

Car::Car() {}

Car::~Car()
{
    std::cout << "Car destructed" << std::endl;
}

