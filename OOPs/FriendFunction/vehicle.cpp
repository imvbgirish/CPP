#include "vehicle.h"
#include <iostream>

Vehicle::Vehicle(int wheels):m_wheels{wheels}{
    std::cout << "Vehicle constructor" << std::endl;
}

Vehicle::~Vehicle(){
    std::cout << "vehicle Destructor called" << std::endl;
}

void Vehicle::stop()
{
    std::cout << "vehicle stopped" << std::endl;
}

