#ifndef VEHICLE_H
#define VEHICLE_H

class Vehicle{
private:
    int m_wheels;
protected:
    void stopVehicle();
public:
    Vehicle();
    Vehicle(int wheels);
    ~Vehicle();
    void moveVehicle();
};

#endif // VEHICLE_H
