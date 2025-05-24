#ifndef WATERVEHICLE_H
#define WATERVEHICLE_H

#include "vehicle.h"

class WaterVehicle :virtual public Vehicle
{
public:
    WaterVehicle();
    ~WaterVehicle();
    WaterVehicle(int wheels);

    void moveOnWater();
};

#endif // WATERVEHICLE_H
