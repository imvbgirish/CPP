#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include "mybaseobject.h"

class Employee : public MyBaseObject
{
public:
    Employee(const std::string& name,MyBaseObject* office = nullptr);
    ~Employee();
    void print() override;
    void addEmployee(MyBaseObject* employee) override;
    void getMe() override;
};

#endif // EMPLOYEE_H
