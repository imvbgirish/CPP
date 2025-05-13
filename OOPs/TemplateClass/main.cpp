#include "student.h"
#include <iostream>

using namespace std;

int main()
{
    Student<int,float> s1(56,3.5);
    float marks = s1.getMarks();

    cout << marks << endl;
    cout << s1.multiply() << endl;

    cout << "Hello World!" << endl;
    return 0;
}
