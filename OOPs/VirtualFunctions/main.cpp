#include "base.h"
#include "derived1.h"
#include "derived2.h"
#include <iostream>

using namespace std;

int main(){

    Base* ptr1 = new Base();
    Base* ptr2 = new Derived1();
    Base* ptr3 = new Derived2();

    cout << "-------------------" << endl;
    ptr1->function1();
    ptr1->function2();
    ptr1->function3();
    cout << "-------------------" << endl;
    ptr2->function1();
    ptr2->function2();
    ptr2->function3();
    cout << "-------------------" << endl;
    ptr3->function1();
    ptr3->function2();
    ptr3->function3();
    cout << "-------------------" << endl;

    delete ptr1;
    delete ptr2;
    delete ptr3;
    return 0;
}
