#include "car.h"

#include <iostream>

using namespace std;

int main()
{
    Car car(4,2);
    car.move();
    car.Vehicle::move();
    car.getWheels();

    cout << "Hello World!" << endl;
    return 0;
}
