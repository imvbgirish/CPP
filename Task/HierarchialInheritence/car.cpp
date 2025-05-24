#include "car.h"
#include <iostream>

Car::Car() {}

Car::~Car()
{
    std::cout << "Car destructed" << std::endl;
}

Car::Car(int wheels, int headlights):Vehicle(wheels),m_headlights(headlights)
{
}

