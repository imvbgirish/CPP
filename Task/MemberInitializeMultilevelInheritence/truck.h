#ifndef TRUCK_H
#define TRUCK_H

#include "car.h"

class Truck : public Car{
public:
    Truck(int wheels,int headlights);
    ~Truck();
};

#endif // TRUCK_H
