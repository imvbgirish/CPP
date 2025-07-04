#include "myclass.h"
#include <iostream>

using namespace std;

int main()
{
    int value = 10;
    int *num = &value;

    MyClass* obj1 = new MyClass();

    MyClass obj(num,1,2,3);

    cout << obj[1] << endl;

    delete obj1;

    cout << "Hello World!" << endl;
    return 0;
}
