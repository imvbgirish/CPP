#include <iostream>

using namespace std;

int main()
{
    int value = 10;
    int &m = value;
    int &n = m;
    int &o = n;

    m = 20;
    n = 30;
    o = 40;

    cout << value << endl;
    cout << m << endl;
    cout << n << endl;
    cout << o << endl;

    cout << &m << endl;
    cout << &n << endl;
    cout << &o << endl;
    cout << &value << endl;

    int number = 10;
    int* ptr = &number;
    cout << *ptr << endl;

    cout << &number << endl;
    cout << ptr << endl;
    cout << &ptr << endl;

    cout << "Hello World!" << endl;
    return 0;
}
