#include "vehicle.h"
#include <iostream>

Vehicle::Vehicle(int wheels, int headlights):m_wheels{wheels},m_headlights{headlights}{
    std::cout << "Vehicle constructor" << std::endl;
    std::cout << "Wheels: " << m_wheels << "\nHeadlights: "<< m_headlights << std::endl;
}

Vehicle::~Vehicle(){
    std::cout << "Vehicle destructor" << std::endl;
}
