#include "vehicle.h"

using namespace std;

int main()
{
    Vehicle vehicle(4);
    Car car("Blue");

    car.move(vehicle);

    return 0;
}
