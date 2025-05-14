#include "base.h"
#include <iostream>

Base::Base() {
    std::cout << "Base constructor" << std::endl;
}

Base::~Base(){
    std::cout << "Base destructor" << std::endl;
}

void Base::function1(){
    std::cout << "Base function1" << std::endl;
}

void Base::function2(){
    std::cout << "Base function2" << std::endl;
}

void Base::function3(){
    std::cout << "Base function3" << std::endl;
}
