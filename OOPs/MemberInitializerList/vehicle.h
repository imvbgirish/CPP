#ifndef VEHICLE_H
#define VEHICLE_H

#include <string>

class Vehicle{
private:
    int m_wheels;
    int m_headlights;
    std::string color;
public:
    Vehicle(int wheels, int headlights);
    Vehicle(int wheels, int headlights,const std::string& color);
    ~Vehicle();
    void move();
};

#endif // VEHICLE_H
