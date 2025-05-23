#ifndef CAR_H
#define CAR_H

#include "vehicle.h"

class Car : public Vehicle{
private:
    int m_headlights;
public:
    Car() = default;
    Car(int wheels,int headlights);
    ~Car();
    void moveCar();
};

#endif // CAR_H
