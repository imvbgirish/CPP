#ifndef VEHICLE_H
#define VEHICLE_H

class Vehicle{
private:
    int m_wheels;
    int m_headlights;
public:
    Vehicle();
    virtual ~Vehicle();

    virtual void move() = 0;
    void stop();
};

#endif // VEHICLE_H
