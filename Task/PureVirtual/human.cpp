#include "human.h"
#include <iostream>

Human::Human() {}

Human::~Human()
{
    std::cout << "Human destructed" << std::endl;
}
