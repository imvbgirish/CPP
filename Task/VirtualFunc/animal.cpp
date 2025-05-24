#include "animal.h"
#include <iostream>

Animal::Animal() {}

Animal::~Animal()
{
    std::cout << "Animal destructed" << std::endl;
}

void Animal::eat()
{
    std::cout << "Animal eats" << std::endl;
}

void Animal::move()
{
    std::cout << "Animal Moves" << std::endl;
}
