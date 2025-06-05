#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include "baseobject.h"
#include <string>

class Office;

class Employee : public BaseObject
{
public:
    Employee(const std::string& name, Office* office);
    Employee(const std::string& name, Employee* employee);
    ~Employee();

    void print() override;
};

#endif // EMPLOYEE_H
