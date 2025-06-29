#include "derived.h"
#include <iostream>

Derived::Derived() {}

Derived::~Derived()
{

}

void Derived::print()
{
    std::cout << "Derived print function" << std::endl;
}

void Derived::read(){
    std::cout << "Derived read function" << std::endl;
}
