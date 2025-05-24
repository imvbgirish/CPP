#include "animal.h"
#include "horse.h"
#include "human.h"
#include <iostream>

using namespace std;

int main()
{
    // Horse horse;
    // horse.eat();

    Animal *animal1 = new Horse;
    Animal *animal2 = new Human();

    animal1->eat();
    animal2->eat();
    animal1->move();
    animal2->move();

    delete animal1;
    delete animal2;

    cout << "Hello World!" << endl;
    return 0;
}
