#include "base.h"
#include <iostream>

Base::Base() {
    std::cout << "Base constructed" << std::endl;
}

Base::~Base()
{
    std::cout << "Base destructed" << std::endl;
}

void Base::print()
{
    std::cout << "Base Printing" << std::endl;
}

