#ifndef VEHICLE_H
#define VEHICLE_H

class Vehicle{
private:
    int m_wheels;
protected:
    void moveVehicle();
    void stopVehicle();
public:
    Vehicle();
    ~Vehicle();
};

#endif // VEHICLE_H
