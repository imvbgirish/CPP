#include "vehicle.h"
#include <iostream>

Vehicle::Vehicle(int wheels, int headlights){   //Parameterized constructor
    std::cout << "Constructor called." << std::endl;
    this->wheels = wheels;
    this->headlights = headlights;  //this refers to pointer to a current object
}

void Vehicle::move(){
    std::cout << "Vehicle is moving" << std::endl;
}
