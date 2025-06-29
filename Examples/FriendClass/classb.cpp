#include "classb.h"
#include <iostream>

ClassB::ClassB()
{
}

ClassB::~ClassB()
{
}

void ClassB::display(ClassA& a)
{
    std::cout << "Name: " << a.m_name << std::endl;
    std::cout << "Contact: " << a.m_contact << std::endl;
}
