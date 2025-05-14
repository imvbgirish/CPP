#ifndef VEHICLE_H
#define VEHICLE_H

#include <iostream>
class Vehicle{
    int m_wheels;
    int m_headlights;
public:
    //Vehicle();
    Vehicle(int wheels,int headlights):m_wheels{wheels},m_headlights{headlights}{
        std::cout << m_wheels << "   " << m_headlights << std::endl;
    }
    ~Vehicle();
};

#endif // VEHICLE_H
