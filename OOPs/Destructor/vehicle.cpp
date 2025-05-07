#include "vehicle.h"
#include <iostream>
#include <string>

Vehicle::Vehicle(const std::string& name) {
    std::cout << "Constructor called." << std:: endl;
    this->name = name;
}

Vehicle::~Vehicle(){
    std::cout << "Destructor called." << std::endl;
}

void Vehicle::move(){
    std::cout << "Car is moving" << std::endl;
}

