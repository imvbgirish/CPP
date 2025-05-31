#ifndef DERIVED_H
#define DERIVED_H

#include "base.h"

class Derived : public Base
{
private:
    int m_number;
public:
    Derived();
    Derived(int value, int number);
    ~Derived();

    void show() override;
};

#endif // DERIVED_H
