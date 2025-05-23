#include "truck.h"
#include <iostream>

Truck::Truck() {}

Truck::~Truck()
{
    std::cout << "Truck destructed" << std::endl;
}
