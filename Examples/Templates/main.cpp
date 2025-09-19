#include <iostream>
#include "derived.h"

using namespace std;

int main()
{

    Derived d;
    d.fun();
    int res = d.display(4);

    cout << "Result: " << res << endl;
    cout << "Hello World!" << endl;
    return 0;
}
