#include "derived2.h"
#include <iostream>

Derived2::Derived2(){
    std::cout << "Derived2 constructor" << std::endl;
}

Derived2::~Derived2(){
    std::cout << "Derived2 destructor" << std::endl;
}

void Derived2::function2(){
    std::cout << "Derived2 function2" << std::endl;
}
