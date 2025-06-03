#include "base.h"
#include <iostream>

int add(int a,int b){
    return a+b;
}

int multiply(int a,int b){
    return a*b;
}

int main()
{
    Base base;
    base.funcPtr = &Base::print;
    (base.*base.funcPtr)();

    Base *base1 = &base;
    (base1->*base1->funcPtr)();


    // ADD
    // int (*addPtr)(int,int);
    // addPtr = add;

    // int sum = addPtr(2,3);
    // std::cout << sum << std::endl;


    // MULTIPLY
    // int (*multiplyPtr)(int,int);
    // multiplyPtr = multiply;

    // int res = multiplyPtr(2,3);
    // std::cout << res << std::endl;

    return 0;
}
