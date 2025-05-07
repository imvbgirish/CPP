#ifndef VEHICLE_H
#define VEHICLE_H

#include <string>

class Vehicle
{
private:
    std::string name;
public:
    Vehicle(const std::string& name);
    void move();
    ~Vehicle();     //destructor
};

#endif // VEHICLE_H
