#include "car.h"
#include <iostream>

Car::Car(int wheels, int headlights):Vehicle(wheels),m_headlights(headlights){
    std::cout << "Car constructor called" << std::endl;
}

Car::~Car(){
    std::cout << "Car destructor called" << std::endl;
}

void Car::move(){
    //Vehicle v;
    std::cout << "Car with " << getWheels() << " and " << m_headlights << " is moving" << std::endl;
}
