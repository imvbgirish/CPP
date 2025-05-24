#include "vehicle.h"
#include <iostream>

Vehicle::Vehicle() {}

Vehicle::~Vehicle()
{
    std::cout << "Vehicle destructed" << std::endl;
}

void Vehicle::moveVehicle()
{
    std::cout << "Vehicle moved" << std::endl;
}

void Vehicle::stopVehicle()
{
    std::cout << "Vehicle stopped" << std::endl;
}

Vehicle::Vehicle(int wheels):m_wheels{wheels}{}

