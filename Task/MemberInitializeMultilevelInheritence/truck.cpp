#include "truck.h"
#include <iostream>

Truck::Truck(int wheels, int headlights):Car(wheels,headlights){
    std::cout << "Truck constructor" << std::endl;
}

Truck::~Truck(){
    std::cout << "Truck destructor" << std::endl;
}
