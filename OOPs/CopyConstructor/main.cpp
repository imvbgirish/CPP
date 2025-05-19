#include "student.h"
#include <iostream>

using namespace std;

int main()
{
    Student s1("Girish",24);
    s1.print();

    Student s2 = s1;
    s2.print();

    s1.setName("Amith");
    s1.print();
    s2.print();

    s2.setName("Shindi");
    s1.print();
    s2.print();

    cout << "Hello World!" << endl;
    return 0;
}
