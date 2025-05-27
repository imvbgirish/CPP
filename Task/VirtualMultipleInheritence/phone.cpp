#include "phone.h"
#include <iostream>

Phone::Phone() {
    std::cout << "Phone constructor" << std::endl;
}

Phone::~Phone()
{
    std::cout << "Phone destructor" << std::endl;
}

void Phone::show()
{
    std::cout << "Phone display" << std::endl;
}
