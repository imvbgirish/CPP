#include "watervehicle.h"
#include <iostream>

WaterVehicle::WaterVehicle() {
    std::cout << "waterVehicle constructed" << std::endl;
}

WaterVehicle::~WaterVehicle() {
    std::cout << "waterVehicle destructed" << std::endl;
}

WaterVehicle::WaterVehicle(int wheels):Vehicle(wheels)
{

}

void WaterVehicle::moveOnWater()
{
    std::cout << "These vehicles move on water" << std::endl;
}
