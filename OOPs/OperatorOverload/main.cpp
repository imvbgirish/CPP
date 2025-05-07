#include "student.h"
#include <iostream>

using namespace std;

int main()
{
    Student s1(30,20);
    Student s2(20,30);
    Student s3 = s1 + s2;

    std::cout << s3.getMarks1() << std::endl;
    std::cout << s3.getMarks2() << std::endl;
    std::cout << (s1 < s2) << std::endl;


    return 0;
}
