#ifndef VEHICLE_H
#define VEHICLE_H

class Vehicle{
public:
    void setWheels(int wheels);
    void setHeadlights(int headlights);

    int getWheels() const;
    int getHeadlights() const;

    void move();
    ~Vehicle();
private:
    int m_wheels;
    int m_headlights;
};

#endif // VEHICLE_H
