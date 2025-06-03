#include "base.h"
#include <iostream>

Base::Base() {
    std::cout << "Base constructor" << std::endl;
}

Base::~Base()
{
    std::cout << "Base destructor" << std::endl;
}

void Base::print()
{
    std::cout << "Base printing" << std::endl;
}
