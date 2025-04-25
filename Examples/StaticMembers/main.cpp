#include "test.h"

int main()
{
    test t;
    test::increment();

    //t.increment();    //works fine
    t.printNum();

    return 0;
}
