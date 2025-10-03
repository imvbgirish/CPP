#include "a.h"
#include <iostream>

A::A() {
    std::cout << "A" << std::endl;
    A(10);
    A('a');
}
