#include "add.h"
#include <iostream>

using namespace std;

int main()
{
    Add add;
    add.add(5,'b');
    add.add(4.5f,5.0f);
    // add.add('a',5.5);

    cout << "Hello World!" << endl;
    return 0;
}
