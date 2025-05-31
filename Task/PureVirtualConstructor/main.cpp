#include "derived.h"
#include <iostream>

using namespace std;

int main()
{
    Derived d(2,3);
    d.show();

    Base* ptr = new Derived(6, 7);
    ptr->show();

    cout << "Hello World!" << endl;
    return 0;
}
