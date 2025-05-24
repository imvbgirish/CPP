#ifndef TRUCK_H
#define TRUCK_H

#include "vehicle.h"

class Truck : protected Vehicle
{
private:
    int m_length;
public:
    Truck();
    ~Truck();
    Truck(int wheels,int length);
};

#endif // TRUCK_H
