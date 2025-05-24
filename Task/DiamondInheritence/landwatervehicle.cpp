#include "landwatervehicle.h"
#include <iostream>

LandWaterVehicle::LandWaterVehicle() {
    std::cout << "landwatervehicle constructed" << std::endl;
}

LandWaterVehicle::~LandWaterVehicle(){
    std::cout << "landwatervehicle destructed" << std::endl;
}

LandWaterVehicle::LandWaterVehicle(int wheels):Vehicle{wheels}
{
    std::cout << "LandWaterVehicle constructed" << std::endl;
}

void LandWaterVehicle::moveOnLandWater()
{
    moveOnLand();
    moveOnWater();
    std::cout << "These vehicles move on both water and land" << std::endl;
}
