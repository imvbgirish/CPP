#ifndef DERIVED_H
#define DERIVED_H

#include "base.h"

class Derived : public Base
{
public:
    Derived();
    ~Derived();
    // void fun() override;    // Cannot be redeclared
    virtual void fun();
};

#endif // DERIVED_H
