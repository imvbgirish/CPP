#include <iostream>

using namespace std;

void increment(int& value){ //value is reference , means a temporary name or alias to a;
    value++;
}

/* if we did not use & instead only int value --> it is equal to creating a
   another variable called value.*/

int main()
{
    cout << "Hello World!" << endl;

    int a = 5;
    cout << a << endl;

    increment(a);

    int& ref = a; //We cannot declare reference variable, we must initialize it.
    cout << a << endl;
    cout << ref << endl;
    return 0;
}
