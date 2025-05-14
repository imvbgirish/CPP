#include "car.h"
#include <iostream>


Car::Car(int wheels,int headlights):Vehicle(wheels,headlights){
    std::cout << "Car parameterized constructor" << std::endl;
}

Car::Car() {
    std::cout << "Car default constructor" << std::endl;
}

Car::~Car(){
    std::cout << "Car destructor" << std::endl;
}

