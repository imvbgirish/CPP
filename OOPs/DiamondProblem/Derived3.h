#ifndef DERIVED3_H
#define DERIVED3_H
#include "Derived1.h"
#include "Derived2.h"

class Derived3:public Derived1,Derived2
{
public:
    Derived3();
    void fun()
    {
        std::cout << "fun" <<std::endl;
    }
};

#endif // DERIVED3_H
