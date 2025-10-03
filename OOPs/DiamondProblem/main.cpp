#include <iostream>
#include "Base.h"
#include "Derived3.h"
#include "Derived1.h"
using namespace std;

int main()
{

    // Derived3 *d=new Derived3;

    // d->Derived1::display();
    // // d->Base::display();
    // cout << "Hello World!" << endl;



    Base* base = (Derived1*)new Derived3;
    base->display();
    delete base;
    // return 0;
}
