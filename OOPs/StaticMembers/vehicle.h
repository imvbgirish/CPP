#ifndef VEHICLE_H
#define VEHICLE_H

class Vehicle{
private:
    int m_wheels;
    static int m_headlights;

public:
    static int num;
    Vehicle(int wheels);
    void move();
    static void stop();
    static void countHeadlights();
    ~Vehicle();
};

#endif // VEHICLE_H
