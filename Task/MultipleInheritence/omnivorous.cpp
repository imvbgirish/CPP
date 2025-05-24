#include "omnivorous.h"
#include <iostream>

Omnivorous::Omnivorous() {
    std::cout << "Omnivorous destructed" << std::endl;
}

Omnivorous::~Omnivorous()
{
    std::cout << "Omnivorous destructed" << std::endl;
}

Omnivorous::Omnivorous(std::string herbFood, std::string carnFood, std::string omnifood):Herbivorous(herbFood),Carnivorous(carnFood)
{
    m_food = omnifood;
    std::cout << m_food << std::endl;
}

void Omnivorous::eatMeatGrass()
{
    std::cout << "Eats: " << m_food << std::endl;
    eatGrass();
    eatMeat();
}
