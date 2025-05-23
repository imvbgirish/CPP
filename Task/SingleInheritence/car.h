#ifndef CAR_H
#define CAR_H

#include "vehicle.h"

class Car : public Vehicle{
private:
    int m_headlights;
public:
    Car(int wheels,int headlights);
    ~Car();
    void move();
};

#endif // CAR_H
