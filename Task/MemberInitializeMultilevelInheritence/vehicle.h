#ifndef VEHICLE_H
#define VEHICLE_H

class Vehicle{
private:
    int m_wheels;
    int m_headlights;
public:
    Vehicle() = default;
    Vehicle(int wheels,int headlights);
    ~Vehicle();
};

#endif // VEHICLE_H
