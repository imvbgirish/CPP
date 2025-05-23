#ifndef LANDWATERVEHICLE_H
#define LANDWATERVEHICLE_H

#include "landvehicle.h"
#include "watervehicle.h"

class LandWaterVehicle : public LandVehicle, public WaterVehicle
{
public:
    LandWaterVehicle();
    ~LandWaterVehicle();
};

#endif // LANDWATERVEHICLE_H
