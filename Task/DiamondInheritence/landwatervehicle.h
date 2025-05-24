#ifndef LANDWATERVEHICLE_H
#define LANDWATERVEHICLE_H

#include "landvehicle.h"
#include "watervehicle.h"

class LandWaterVehicle : public LandVehicle, public WaterVehicle
{

public:
    LandWaterVehicle();
    ~LandWaterVehicle();
    LandWaterVehicle(int wheels);

    void moveOnLandWater();
};

#endif // LANDWATERVEHICLE_H
