#include "base.h"
#include "derived.h"

int main()
{
    Base* obj = new Derived();
    delete obj;

    return 0;
}
