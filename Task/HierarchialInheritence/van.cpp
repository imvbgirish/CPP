#include "van.h"
#include <iostream>

Van::Van() {}

Van::~Van()
{
    std::cout << "Van destructed" << std::endl;
}

void Van::moveVan()
{
    moveVehicle();
    stopVehicle();
    std::cout << "Van is moving" << std::endl;
}
