#ifndef CAR_H
#define CAR_H

#include <string>
class Vehicle;

class Car{
private:
    std::string m_color;
public:
    Car(std::string color);
    void move(Vehicle& v);
    ~Car();
};

#endif // CAR_H
