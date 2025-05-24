#ifndef VAN_H
#define VAN_H

#include "vehicle.h"

class Van : private Vehicle
{
private:
    int m_seats;
public:
    Van();
    ~Van();
    Van(int wheels,int seats);
    void moveVan();
};

#endif // VAN_H
