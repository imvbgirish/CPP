#include "horse.h"
#include <iostream>

Horse::Horse() {
    std::cout << "Horse constructed" << std::endl;
}

Horse::~Horse()
{
    std::cout << "Horse destructed" << std::endl;
}

void Horse::move()
{
    std::cout << "Horse is moving" << std::endl;
}


