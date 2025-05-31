#include "derived.h"
#include <iostream>

Derived::Derived() {
    std::cout << "Derived constructor called" << std::endl;
}

Derived::Derived(int value, int number):Base(value)
{
    m_number = number;
}

Derived::~Derived()
{
    std::cout << "Derived destructor called" << std::endl;
}

void Derived::show()
{
    std::cout << "value1: " << m_value << "\nvalue2: " << m_number << std::endl;
}

