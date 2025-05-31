#include "derived.h"
#include <iostream>

Derived::Derived() {
    std::cout << "Derived constructor" << std::endl;
}


Derived::~Derived()
{
    std::cout << "Derived destructor" << std::endl;
}

