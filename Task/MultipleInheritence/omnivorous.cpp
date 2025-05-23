#include "omnivorous.h"
#include <iostream>

Omnivorous::Omnivorous() {
    std::cout << "Omnivorous destructed" << std::endl;
}

Omnivorous::~Omnivorous()
{
    std::cout << "Omnivorous destructed" << std::endl;
}

void Omnivorous::eatMeatGrass()
{
    eatGrass();
    eatMeat();
}
