#include <iostream>

using namespace std;

int main()
{
    cout << "Hello World!" << endl;

    //Reference variable
    //datatype &reference-name = variable-name
    //Here & is not an address operator, it just reference to float

    //Example 1
    float total = 100;
    float &sum = total;

    cout << total << endl;
    cout << sum << endl;

    sum = 0;
    cout << sum << endl;
    cout << total << endl;

    //Example 2
    int x = 10;
    int *p = &x;
    int &m = *p;

    cout << m << endl;

    return 0;
}
