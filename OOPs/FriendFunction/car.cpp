#include "car.h"
#include "vehicle.h"
#include <iostream>

Car::Car(std::string color){
    this->m_color = color;
    std::cout << "car constructor" << std::endl;
}

void Car::move(Vehicle &v)
{
    std::cout << "Wheels: "<< v.m_wheels << std::endl;
    std::cout << "Color: " << m_color << std::endl;
}

Car::~Car(){
    std::cout << "car Destructor called" << std::endl;
}



