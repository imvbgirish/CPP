#include "car.h"
#include <iostream>

Car::Car(int wheels, int headlights):Vehicle(wheels,headlights){
    std::cout << "Car constructor" << std::endl;
}

Car::~Car(){
    std::cout << "Car destructor" << std::endl;
}


