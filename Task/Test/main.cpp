#include "base.h"
#include "derived.h"
#include <iostream>

using namespace std;

int main()
{
    Base *ptr0 = new Base();
    Base *ptr1 = new derived;
    ptr0->fun();
    ptr1->fun();

    delete ptr0;
    delete ptr1;

    cout << "Hello World!" << endl;
    return 0;
}
