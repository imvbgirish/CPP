#include "car.h"
#include <iostream>

// Car::Car(){

// }

Car::Car(int wheels, int headlights):Vehicle(wheels,headlights)
{
    std::cout << wheels << "   " << headlights << std::endl;
}

Car::~Car(){
    std::cout << "car Destructor called" << std::endl;
}
