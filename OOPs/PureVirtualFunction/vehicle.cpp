#include "vehicle.h"
#include <iostream>

Vehicle::Vehicle() {
    std::cout << "Vehicle constructed" << std::endl;
}

Vehicle::~Vehicle(){
    std::cout << "Vehicle destructed" << std::endl;
}

void Vehicle::stop()
{
    std::cout << "Vehicle stopped" << std::endl;
}

