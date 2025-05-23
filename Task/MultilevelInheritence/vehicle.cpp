#include "vehicle.h"
#include <iostream>

void Vehicle::stopVehicle()
{
    std::cout << "Vehicle stopped" << std::endl;
}

Vehicle::Vehicle() {
    std::cout << "Default vehicle constructed" << std::endl;
}

Vehicle::Vehicle(int wheels):m_wheels{wheels}{
    std::cout << "Vehicle Pconstructed" << std::endl;
}

Vehicle::~Vehicle(){
    std::cout << "Vehicle destructed" << std::endl;
}

void Vehicle::moveVehicle()
{
    std::cout << "Vehicle is moving" << std::endl;
}

