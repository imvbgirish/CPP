#include "vehicle.h"
#include <iostream>

int main()
{
    Vehicle *v1 = new Vehicle;
    v1->setWheels(6);
    v1->setHeadlights(2);
    v1->move();

    delete v1;

    Vehicle *v = new Vehicle[10];   //Creating 10 vehicle objects on the heap

    // for(int i=0; i<10; i++){
    //     v[i].move();
    // }

    std::cout << v << std::endl;    //prints base address
    delete[] v;

    return 0;
}
