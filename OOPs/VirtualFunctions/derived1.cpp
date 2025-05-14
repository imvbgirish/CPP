#include "derived1.h"
#include <iostream>

Derived1::Derived1(){
    std::cout << "Derived1 constructor" << std::endl;
}

Derived1::~Derived1(){
    std::cout << "Derived1 destructor" << std::endl;
}

void Derived1::function1(){
    std::cout << "Derived1 function1" << std::endl;
}
