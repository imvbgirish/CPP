#include "base.h"
#include "derived.h"
#include <iostream>

using namespace std;

int main()
{
    // Case 1
    // Base* basePtr1 = new Base(4);
    // Base* basePtr2 = new Base(*basePtr1);
    // delete basePtr1;
    // delete basePtr2;

    // Case 2
    // Derived* derivedPtr = new Derived();
    // delete derivedPtr;

    // Case 3
    // Base base1(5);
    // Base base2;
    // base1.print(base1);

    // // Case 4
    // Base base = 4;
    // std::cout << base.getValue() << std::endl;

    // case 5
    Base* derivedPtr = new Derived();
    delete derivedPtr;

    return 0;
}
