#include "animal.h"
#include <iostream>

Animal::Animal() {
    std::cout << "Animal constructed" << std::endl;
}

Animal::~Animal()
{
    std::cout << "Animal destructed" << std::endl;
 }
