#include "carnivorous.h"
#include <iostream>

Carnivorous::Carnivorous() {
    std::cout << "Carnivorous constructor" << std::endl;
}

Carnivorous::~Carnivorous()
{
    std::cout << "Carnivorous destructed" << std::endl;
}

void Carnivorous::eatMeat()
{
    std::cout << "These animals eat meat" << std::endl;
}
