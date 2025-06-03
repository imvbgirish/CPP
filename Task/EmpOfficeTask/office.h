#ifndef OFFICE_H
#define OFFICE_H

#include <vector>
#include <employee.h>

class Office
{
public:
    Office();
    ~Office();
    void addEmployee(Employee* emp);
    void print();
private:
    std::vector<Employee*> employees;
};

#endif // OFFICE_H
