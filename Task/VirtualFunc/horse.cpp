#include "horse.h"
#include <iostream>

Horse::Horse() {}

Horse::~Horse()
{
    std::cout << "Horse destructed" << std::endl;
}

void Horse::eat()
{
    std::cout << "Horse eats grass" << std::endl;
}
