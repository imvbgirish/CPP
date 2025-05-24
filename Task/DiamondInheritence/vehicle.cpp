#include "vehicle.h"
#include <iostream>

Vehicle::Vehicle() {
    std::cout << "vehicle constructed" << std::endl;
}

Vehicle::~Vehicle() {
    std::cout << "vehicle destructed" << std::endl;
}

void Vehicle::moveVehicle()
{
    std::cout << "Vehicle is moving with " << m_wheels << " wheels" << std::endl;
}

Vehicle::Vehicle(int wheels)
{
    std::cout << "Vehicle PConstructor called" << std::endl;
    m_wheels = wheels;
}

