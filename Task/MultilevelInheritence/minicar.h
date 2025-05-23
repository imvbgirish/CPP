#ifndef MINICAR_H
#define MINICAR_H

#include "car.h"

class MiniCar: public Car{
    int m_seats;
public:
    MiniCar();
    MiniCar(int wheels,int headlights,int seats);
    ~MiniCar();
    void moveFast();
};

#endif // MINICAR_H
