#ifndef LANDVEHICLE_H
#define LANDVEHICLE_H

#include "vehicle.h"

class LandVehicle :virtual public Vehicle
{
public:
    LandVehicle();
    ~LandVehicle();
    LandVehicle(int wheels);

    void moveOnLand();
};

#endif // LANDVEHICLE_H
