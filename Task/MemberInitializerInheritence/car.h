#ifndef CAR_H
#define CAR_H

#include "vehicle.h"

class Car: public Vehicle{
public:
    //using Vehicle::Vehicle;
    //Car();
    Car(int wheels,int headlights);
    ~Car();
};

#endif // CAR_H
