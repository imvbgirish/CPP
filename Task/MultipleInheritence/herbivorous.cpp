#include "herbivorous.h"
#include <iostream>

Herbivorous::Herbivorous() {
    std::cout << "Herbivorous constructed" << std::endl;
}

Herbivorous::~Herbivorous()
{
    std::cout << "Herbivorous destucted" << std::endl;
}

Herbivorous::Herbivorous(std::string food):m_food{food}
{
    std::cout << m_food << std::endl;
}

void Herbivorous::eats()
{
    std::cout << "Herbivorous" << std::endl;
}

std::string Herbivorous::getHerbivorousFood() const
{
    return m_food;
}

void Herbivorous::eatGrass()
{
    std::cout << "These animals eat " << m_food << std::endl;
}


