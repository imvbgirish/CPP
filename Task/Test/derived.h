#ifndef DERIVED_H
#define DERIVED_H

#include "base.h"

class derived : public Base
{
public:
    derived();
    ~derived();
    virtual void fun();
};

#endif // DERIVED_H
