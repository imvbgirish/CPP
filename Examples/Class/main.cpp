#include <iostream>
#include "item.h"

using namespace std;

int main()
{
    cout << "Hello World!" << endl;

    item x;
    cout << "\nObject x " << "\n";
    x.getdata(100,299.4);
    x.putdata();

    item y;
    cout << "\nObject y " << "\n";
    y.getdata(200,399.4);
    y.putdata();

   //y.read();  //Error

    return 0;
}
