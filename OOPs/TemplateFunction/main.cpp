#include "student.h"
#include <iostream>

using namespace std;

int main()
{

    Student s1;
    float res = s1.getValue<int,float>(66,56.4);

    Student s2;
    float ans = s2.multiply<int,float,int>(2,3.3,4);

    cout << ans << endl;

    cout << res << endl;
    cout << "Hello World!" << endl;
    return 0;
}
