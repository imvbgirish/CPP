#include "base.h"
#include "derived.h"


int main()
{
    Base *basePtr = new Derived();
    basePtr->show();
    basePtr->print();

    basePtr->readMe();

    Base *base = new Base();
    base->readMe();

    delete basePtr;
    delete base;

    return 0;
}
