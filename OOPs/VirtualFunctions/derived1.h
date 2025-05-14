#ifndef DERIVED1_H
#define DERIVED1_H

#include "base.h"

class Derived1: public Base{
public:
    Derived1();
    virtual ~Derived1();

    void function1() override;
};

#endif // DERIVED1_H
