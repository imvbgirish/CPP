#ifndef VEHICLE_H
#define VEHICLE_H

class Vehicle{
private:
    int m_wheels;
    int m_headlights;
public:
    Vehicle();
    ~Vehicle();

    virtual void move() = 0;
};

#endif // VEHICLE_H
