#include "truck.h"
#include <iostream>

Truck::Truck() {}

Truck::~Truck()
{
    std::cout << "Truck destructed" << std::endl;
}

Truck::Truck(int wheels, int length):Vehicle(wheels),m_length(length)
{
}
