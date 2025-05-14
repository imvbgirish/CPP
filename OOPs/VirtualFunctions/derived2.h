#ifndef DERIVED2_H
#define DERIVED2_H

#include "derived1.h"

class Derived2 : public Derived1{
public:
    Derived2();
    virtual ~Derived2();

    void function2() override;
};

#endif // DERIVED2_H
