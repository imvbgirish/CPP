#include "myclassb.h"
#include "myclassa.h"
#include <iostream>

MyClassB::MyClassB() {}

MyClassB::~MyClassB()
{

}

void MyClassB::friendOfClassA(MyClassA &obj)
{
    std::cout << "Name: " << obj.m_name << std::endl;
    std::cout << "Contact: " << obj.m_contact << std::endl;
}
