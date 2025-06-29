#include "a.h"
#include <iostream>

A::A() {
    m_contact = 3456789;
    std::cout << "Constructor called" << std::endl;
}

A::~A()
{
    std::cout << "Destructor called" << std::endl;
}

A::A(const A &a)
{
    m_contact = a.m_contact;
    std::cout << "Contact: " << m_contact << std::endl;
    std::cout << "Copy constructor called" << std::endl;
}
