#include "base.h"
#include "derived.h"
#include <iostream>

using namespace std;

int main()
{
    // case 1
    // Base* ptr = new Base();
    // Derived* d1 = static_cast<Derived*>(ptr);  // ❌ Unsafe — undefined behavior
    // d1->print();

    // case 2
    // Base* ptr = new Base();
    // Derived* d2 = dynamic_cast<Derived*>(ptr);
    // if (d2) {
    //     d2->print();
    // } else {
    //     std::cout << "Downcast failed\n";
    // }

    // case 3
    Base* ptr1 = new Derived();
    Derived* d3 = dynamic_cast<Derived*>(ptr1);
    if (d3) {
        d3->print();
    } else {
        std::cout << "Downcast failed\n";
    }

    // delete d1;
    // delete d2;
    delete d3;

    Derived derived;
    Base* base = &derived;
    base->print();

    cout << "Hello World!" << endl;
    return 0;
}
