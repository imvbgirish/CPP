#include "landvehicle.h"
#include <iostream>

LandVehicle::LandVehicle() {
    std::cout << "landVehicle constructed" << std::endl;
}

LandVehicle::~LandVehicle(){
    std::cout << "landVehicle destructed" << std::endl;
}

LandVehicle::LandVehicle(int wheels):Vehicle(wheels)
{
}

void LandVehicle::moveOnLand()
{
    std::cout << "These vehicle moves on land" << std::endl;
}
