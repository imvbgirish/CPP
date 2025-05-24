#include "carnivorous.h"
#include <iostream>

Carnivorous::Carnivorous() {
    std::cout << "Carnivorous constructed" << std::endl;
}

Carnivorous::~Carnivorous()
{
    std::cout << "Carnivorous destructed" << std::endl;
}

Carnivorous::Carnivorous(std::string food)
{
    m_food = food;
    std::cout << m_food << std::endl;

}

void Carnivorous::eats()
{
    std::cout << "Carnivorous" << std::endl;
}

std::string Carnivorous::getCarnivorousFood() const
{
    return m_food;
    //std::cout<<m_food<<std::endl;
}


void Carnivorous::eatMeat()
{
    std::cout << "These animals eat " <<  m_food << std::endl;
}
