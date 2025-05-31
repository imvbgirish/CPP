#include "base.h"
#include <iostream>

Base::Base() {
    std::cout << "Base constructor" << std::endl;
}

Base::Base(int value)
{
    m_value = value;
    std::cout << "Base parameterized constructor" << std::endl;
}

Base::Base(const Base &other)
{
    m_value = other.m_value;
    std::cout << "Copy constructor" << std::endl;
}

int Base::getValue() const
{
    return m_value;
}

Base::~Base()
{
    std::cout << "Base destructor" << std::endl;
}

void Base::print(Base copy)
{
    std::cout << copy.m_value << std::endl;
    std::cout << "Base is printing" << std::endl;
}


