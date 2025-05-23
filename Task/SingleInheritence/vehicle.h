#ifndef VEHICLE_H
#define VEHICLE_H

class Vehicle{
private:
    int m_wheels;
public:
    Vehicle() = default;
    Vehicle(int wheels);
    ~Vehicle();
    int getWheels() const;
    void move();
};

#endif // VEHICLE_H
