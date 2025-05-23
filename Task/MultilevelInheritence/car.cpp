#include "car.h"
#include <iostream>


Car::Car(int wheels, int headlights):Vehicle(wheels),m_headlights(headlights){
    std::cout << "car Pconstructed" << std::endl;
}

Car::~Car()
{
    std::cout << "car destructed" << std::endl;
}

void Car::moveCar()
{
    std::cout << "Car is moving" << std::endl;
}

