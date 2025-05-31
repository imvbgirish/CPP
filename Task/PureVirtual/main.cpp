#include "human.h"
#include <iostream>

using namespace std;

int main()
{
    // Horse horse;
    Human human;
    // Animal *ptr = new Horse();
    Animal *ptr1 = new Human();
    // ptr->eats();
    ptr1->eats();
    human.move();

    cout << "Hello World!" << endl;

    return 0;
}
