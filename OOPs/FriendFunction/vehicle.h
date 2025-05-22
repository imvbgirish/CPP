#ifndef VEHICLE_H
#define VEHICLE_H

#include "car.h"

class Vehicle{
    int m_wheels;
public:
    Vehicle(int wheels);
    ~Vehicle();
    friend void Car::move(Vehicle&);
    void stop();
};

#endif // VEHICLE_H
