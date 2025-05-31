#include "student.h"
#include <iostream>

using namespace std;

int main()
{
    Student s1(30,20);
    Student s2(20,30);
    Student s3 = s1 + s2;
    Student s4 = s2;    //Copy constructor

    std::cout << s4.getMarks1() << std::endl;
    std::cout << s4.getMarks2() << std::endl;
    std::cout << s3.getMarks1() << std::endl;
    std::cout << s3.getMarks2() << std::endl;
    std::cout << std::boolalpha << (s1 < s2) << std::endl;
    std::cout << std::boolalpha << (s3 > s2) << std::endl;

    std::cout << s4.getMarks1() << std::endl;
    std::cout << s4.getMarks2() << std::endl;

    return 0;
}
