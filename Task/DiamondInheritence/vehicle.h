#ifndef VEHICLE_H
#define VEHICLE_H

class Vehicle
{
private:
    int m_wheels;
public:
    Vehicle();
    ~Vehicle();
    Vehicle(int wheels);

    void moveVehicle();
};

#endif // VEHICLE_H
