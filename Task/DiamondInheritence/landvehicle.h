#ifndef LANDVEHICLE_H
#define LANDVEHICLE_H

#include "vehicle.h"

class LandVehicle :virtual public Vehicle   //if not given virtual, says function found in multiple base classes
{
public:
    LandVehicle();
    ~LandVehicle();
    LandVehicle(int wheels);

    void moveOnLand();
};

#endif // LANDVEHICLE_H
