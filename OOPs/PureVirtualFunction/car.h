#ifndef CAR_H
#define CAR_H

#include "vehicle.h"

class Car: public Vehicle{
public:
    Car();
    ~Car();

    void move() override;
};

#endif // CAR_H
