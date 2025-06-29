#ifndef DERIVED_H
#define DERIVED_H

#include "base.h"

class Derived : public Base
{
public:
    Derived();
    ~Derived();

private:
    void print() override;
    void read() override;
};

#endif // DERIVED_H
