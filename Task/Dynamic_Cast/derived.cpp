#include "derived.h"
#include <iostream>

Derived::Derived() {
    std::cout << "Derived constructed" << std::endl;
}


Derived::~Derived()
{
    std::cout << "Derived destructed" << std::endl;
}

void Derived::print()
{
    std::cout << "Derived Printing" << std::endl;
}

