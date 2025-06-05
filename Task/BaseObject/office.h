#ifndef OFFICE_H
#define OFFICE_H

#include "mybaseobject.h"

class Office : public MyBaseObject
{
public:
    Office(const std::string& name);
    ~Office();
    void print() override;
    void addEmployee(MyBaseObject* employee) override;
    void getMe() override;
};

#endif // OFFICE_H
