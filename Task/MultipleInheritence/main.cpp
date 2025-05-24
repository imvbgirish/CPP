#include "omnivorous.h"
#include <iostream>

using namespace std;

int main()
{
    Omnivorous omnivorous("Grass","Meat","Meat and Grass");
    omnivorous.eatMeatGrass();
    Omnivorous omni;
    omni.eats();

    // std::cout << omni.getCarnivorousFood();
    // std::cout << omni.getHerbivorousFood();

    cout << "Hello World!" << endl;
    return 0;
}
