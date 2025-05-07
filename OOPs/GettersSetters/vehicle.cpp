#include "vehicle.h"
#include <iostream>

void Vehicle::setWheels(int wheels){    //Setter
    if(wheels < 1){
        throw std::invalid_argument("less than 1");
    }
    m_wheels = wheels;
}

int Vehicle::getWheels() const{         //Getter
    return m_wheels;
}

void Vehicle::setHeadlights(int headlights){
    if(headlights <2){
        throw std::invalid_argument("less than 2");
    }
    this->m_headlights = headlights;
}

int Vehicle::getHeadlights() const{
    return m_headlights;
}

void Vehicle::move(){
    std::cout << "Vehicle with " << m_wheels << " wheels and " << m_headlights <<" headlight is moving." << std::endl;
}

Vehicle::~Vehicle(){
    std::cout << "Destructor called." << std::endl;
}

