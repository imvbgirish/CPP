#include "vehicle.h"
#include <iostream>

Vehicle::Vehicle() {
    std::cout << "Vehicle default constructor" << std::endl;
}

Vehicle::Vehicle(int wheels, int headlights):m_wheels{wheels},m_headlights{headlights}{
    std::cout << "Vehicle parameterized constructor" << std::endl;
    std::cout << "Wheels: " << m_wheels << "\nHeadlights: " << m_headlights << std::endl;
}

Vehicle::~Vehicle(){
    std::cout << "Vehicle destructor" << std::endl;
}
