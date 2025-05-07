#include "vehicle.h"
#include <iostream>

Vehicle::Vehicle(int wheels):m_wheels{wheels}{}

Vehicle::~Vehicle(){
    std::cout << "Destructor called" << std::endl;
}

