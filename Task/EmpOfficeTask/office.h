#ifndef OFFICE_H
#define OFFICE_H

#include <string>
#include "baseobject.h"
#include "employee.h"


class Office : public BaseObject
{
public:
    Office(const std::string& name);
    ~Office();
    void addEmployee(Employee* employee);
    void print() override;
};

#endif // OFFICE_H
