#include "horse.h"
#include <iostream>

Horse::Horse() {}

Horse::~Horse()
{
    std::cout << "Horse destructor" << std::endl;
}
