#include "base.h"
#include <iostream>

Base::Base() {}

void Base::fun()
{
    std::cout << "playing" << std::endl;
}

template<typename T>
T Base::display(T a)
{
    return a;
}

template int Base::display(int);
template float Base::display(float);
