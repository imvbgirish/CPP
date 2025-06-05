#include "office.h"
#include <iostream>

Office::Office(const std::string &name):MyBaseObject(name)
{
    std::cout << "Office constructor" << std::endl;
}

Office::~Office()
{
    std::cout << "Office destructor" << std::endl;
}

void Office::print()
{
    // std::cout << getName() << std::endl;

    for (MyBaseObject* child : m_childList) {
        child->print();
    }
}

void Office::addEmployee(MyBaseObject* employee)
{
    m_childList.push_back(employee);
    std::cout << "Add employee of office" << std::endl;
}

void Office::getMe()
{

}
