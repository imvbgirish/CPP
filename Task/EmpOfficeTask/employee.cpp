#include "employee.h"
#include "office.h"
#include <iostream>

Employee::Employee(const std::string& name, Office* office)
    : BaseObject(name) {
    std::cout<<"Employee constructor"<<std::endl;
    if (office) {
        office->addEmployee(this);
    }
}

Employee::Employee(const std::string& name, Employee* employee)
    : BaseObject(name) {
    std::cout<<"Employee constructor"<<std::endl;
    if (employee) {
        employee->addChild(this);
    }
}

Employee::~Employee()
{
    std::cout<<"Employee destructor"<<std::endl;
}

void Employee::print() {
    printChildList();
}
