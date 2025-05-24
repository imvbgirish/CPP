#include "animal.h"
#include <iostream>

Animal::Animal() {}

Animal::~Animal()
{
    std::cout << "Animal destructed" << std::endl;
 }
