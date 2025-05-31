#include "human.h"
#include <iostream>

Human::Human() {
    std::cout << "Human constructed" << std::endl;
}

Human::~Human()
{
    std::cout << "Human destructed" << std::endl;
}

// void Human::move()
// {
//     std::cout << "Human is moving" << std::endl;
// }

void Human::eats()
{
    std::cout << "Human eats" << std::endl;
}
