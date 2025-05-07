#include "Vehicle.h"
#include <iostream>

void Vehicle::move(){
    std::cout << "Vehicle is moving." << std::endl;
    wheels = 4;
    headlights = 2; //Private variables can be accessed within class
}
