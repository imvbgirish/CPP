#include "office.h"
#include "employee.h"
#include <iostream>

Office::Office(const std::string& name) : BaseObject(name) {
    std::cout<<"Office constructor"<<std::endl;
}

Office::~Office()
{
    std::cout<<"Office destructor"<<std::endl;
}

void Office::addEmployee(Employee* employee) {
    std::cout<<"Office constructor"<<std::endl;
    addChild(employee);
}

void Office::print() {
    printChildList();
}
