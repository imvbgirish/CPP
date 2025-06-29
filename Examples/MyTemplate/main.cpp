#include "myclass.h"
#include <iostream>

int main()
{
    MyClass<int,float> a(10,20.25f);
    a.print();
    int sum = a.add();
    std::cout << "Sum: " << sum << std::endl;

    return 0;
}
