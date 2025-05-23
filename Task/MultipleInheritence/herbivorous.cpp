#include "herbivorous.h"
#include <iostream>

Herbivorous::Herbivorous() {
    std::cout << "Herbivorous constructed" << std::endl;
}

Herbivorous::~Herbivorous()
{
    std::cout << "Herbivorous destucted" << std::endl;
}

void Herbivorous::eatGrass()
{
    std::cout << "These animals eat grass" << std::endl;
}


