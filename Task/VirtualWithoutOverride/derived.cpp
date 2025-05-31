#include "derived.h"
#include <iostream>

Derived::Derived() {
    std::cout << "derived constructor" << std::endl;
}

Derived::~Derived()
{
    std::cout << "derived destructor" << std::endl;
}

void Derived::fun()
{
    std::cout << "Derived fun" << std::endl;
}
