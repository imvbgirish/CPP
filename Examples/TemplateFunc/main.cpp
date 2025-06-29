#include "myclass.h"

int main()
{
    MyClass obj1;
    int a = 10;
    float b = 20.5f;
    int c = 4;
    obj1.printSum(&a,&b);
    obj1.multiply(a,c);

    return 0;
}
