#include "human.h"
#include <iostream>

Human::Human() {}

Human::~Human()
{
    std::cout << "Human destructed" << std::endl;
}

void Human::eat()
{
    std::cout << "Human eats both veg and nonveg." << std::endl;
}

void Human::move()
{
    std::cout << "Human moves" << std::endl;
}
