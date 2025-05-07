#ifndef VEHICLE_H
#define VEHICLE_H

class Vehicle{
private:
    int wheels;
    int headlights;
public:
    Vehicle() = default;               //default constructor
    Vehicle(int, int);
    Vehicle(const Vehicle& vehicle);  //copy constructor

    void move();
};

#endif // VEHICLE_H
