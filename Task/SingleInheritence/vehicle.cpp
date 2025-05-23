#include "vehicle.h"
#include <iostream>

Vehicle::Vehicle(int wheels):m_wheels{wheels}{
    std::cout << "Base constructor called" << std::endl;
}

int Vehicle::getWheels() const{
    return m_wheels;
}

Vehicle::~Vehicle(){
    std::cout << "Base destructor called" << std::endl;
}

void Vehicle::move()
{
    std::cout << "Vehicle with "<< m_wheels << " is moving" << std::endl;
}
