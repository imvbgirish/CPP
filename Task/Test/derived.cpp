#include "derived.h"
#include <iostream>

derived::derived() {
    std::cout << "derived constructor" << std::endl;
}

derived::~derived()
{
    std::cout << "derived destructor" << std::endl;
}

void derived::fun()
{
    std::cout << "Derived fun" << std::endl;
}
