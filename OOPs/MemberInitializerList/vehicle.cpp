#include "vehicle.h"
#include <iostream>

Vehicle::Vehicle(int wheels,int headlights):m_wheels{4}, m_headlights{headlights} { //Faster
    std::cout << "Constructor called." << std::endl;
    std::cout << m_wheels << std::endl;
}

Vehicle::Vehicle(int wheels,int headlights,const std::string& color): Vehicle(wheels,headlights){
    this->color = color;        //Constructor delegation(constructor within contructor called)
}

void Vehicle::move(){
    std::cout << "Car is moving." << std::endl;
}

Vehicle::~Vehicle(){
    std::cout << "Destructor called." << std::endl;
}

