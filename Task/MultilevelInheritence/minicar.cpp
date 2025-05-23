#include "minicar.h"
#include <iostream>

MiniCar::MiniCar() {}

MiniCar::MiniCar(int wheels, int headlights, int seats):Car(wheels,headlights),m_seats{seats}{
    std::cout << "MiniCar PConstructed" << std::endl;
}

MiniCar::~MiniCar()
{
    std::cout << "MiniCar destructed" << std::endl;
}

void MiniCar::moveFast()
{
    std::cout << "MiniCar is moving fast" << std::endl;
    moveVehicle();
    stopVehicle();
}
