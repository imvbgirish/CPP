#ifndef CAR_H
#define CAR_H

#include "vehicle.h"

class Car : public Vehicle
{
private:
    int m_headlights;
public:
    Car();
    ~Car();
    Car(int wheels,int headlights);
};

#endif // CAR_H
