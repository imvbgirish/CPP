#include "car.h"
#include <iostream>

Car::Car() {
    std::cout << "Car constructed" << std::endl;
}

Car::~Car(){
    std::cout << "Car destructed" << std::endl;
}

void Car::move(){
    std::cout << "Car is moving" << std::endl;
}

