#include "landwatervehicle.h"

int main()
{
    LandWaterVehicle lwvehicle(4);
    lwvehicle.moveOnLand();
    lwvehicle.moveOnWater();
    lwvehicle.moveOnLandWater();
    lwvehicle.moveVehicle();

    return 0;
}
