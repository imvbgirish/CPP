#include "employee.h"
#include <iostream>
#include <string>

Employee::Employee(const std::string &name, MyBaseObject* office):MyBaseObject(name,office)
{
    std::cout << "Employee constructor" << std::endl;
}

Employee::~Employee()
{
    std::cout << "Employee destructor" << std::endl;
}

void Employee::print()
{
    std::cout << getName() << std::endl;

    for (auto child : m_childList) {
        child->print();
    }
}

void Employee::addEmployee(MyBaseObject* employee)
{
    m_childList.push_back(employee);
    std::cout << "Add employee of office" << std::endl;
}

void Employee::getMe()
{

}

