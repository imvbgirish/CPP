#include "base.h"
#include <iostream>

Base::Base() {}

Base::~Base()
{

}

void Base::show()
{
    std::cout << "Show function in base" << std::endl;

}

void Base::readMe()
{
    read();
}

void Base::print()
{
    std::cout << "Base print function" << std::endl;
}

void Base::read()
{
    std::cout << "Base read function" << std::endl;
}
