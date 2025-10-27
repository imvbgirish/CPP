#include <iostream>

using namespace std;

int add(int a, int b = 10, int c = 20){
    return a+b+c;
}

int main()
{
    long var1 = 10;
    cout << sizeof(var1) << endl;
    cout << var1 << endl;

    long int var2 = 10;
    cout << sizeof(var2) << endl;

    long long var3 = 10;
    cout << sizeof(var3) << endl;

    unsigned int var4 = -10;    // wont work
    cout << sizeof(var4) << endl;
    cout << var4 << endl;

    signed int var5 = -10;
    cout << sizeof(var5) << endl;
    cout << var5 << endl;

    short int var6 = 10;
    cout << sizeof(var6) << endl;

    cout << "Sum: " << add(10,20) << endl;

    cout << "Hello World!" << endl;
    return 0;
}
