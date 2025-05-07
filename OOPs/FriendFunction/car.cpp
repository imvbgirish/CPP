#include "car.h"
#include "vehicle.h"
#include <iostream>

Car::Car(std::string color){
    this->m_color = color;
}

void Car::move(Vehicle &v)
{
    std::cout << v.m_wheels << std::endl;
    std::cout << m_color << std::endl;
}

Car::~Car(){
    std::cout << "Destructor called" << std::endl;
}


