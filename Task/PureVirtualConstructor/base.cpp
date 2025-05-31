#include "base.h"
#include <iostream>

Base::Base() {
    std::cout << "Base constructor called" << std::endl;
}

Base::Base(int value)
{
    m_value = value;
}

Base::~Base()
{
    std::cout << "Base destructor called" << std::endl;

}

