#include "van.h"
#include <iostream>

Van::Van() {}

Van::~Van()
{
    std::cout << "Van destructed" << std::endl;
}

Van::Van(int wheels, int seats):Vehicle(wheels),m_seats{seats}
{

}

void Van::moveVan()
{
    moveVehicle();
    stopVehicle();
    std::cout << "Van with is moving" << std::endl;
}
