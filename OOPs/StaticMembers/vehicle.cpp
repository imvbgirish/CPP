#include "vehicle.h"
#include <iostream>

Vehicle::Vehicle(int wheels):m_wheels{wheels}{}

int Vehicle::num = 10;

int Vehicle::m_headlights = 2;      //static var initialised here.

void Vehicle::move(){
    std::cout << "Vehicle moving" << std::endl;
   // m_headlights = 5;             //instance func can access static variables
}

void Vehicle::stop(){
    std::cout << "Vehicle stopped" << std::endl;
   // m_headlights= 3;
}

void Vehicle::countHeadlights(){
   // m_headlights = 4;           //To use static variable inside function, it must be intialised.
    std::cout << "Headlight: " << m_headlights << std::endl;
}

Vehicle::~Vehicle(){
    std::cout << "Destructor called" << std::endl;
}

