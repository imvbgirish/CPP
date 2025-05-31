#include "derived.h"
#include <iostream>

using namespace std;

int main()
{
    Derived derived;
    Base *ptr = &derived;
    ptr->print();

    cout << "Hello World!" << endl;
    return 0;
}
