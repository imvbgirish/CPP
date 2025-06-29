#include "a.h"
#include <iostream>

using namespace std;

void printByValue(A a){
    std::cout << "Contact: " << a.m_contact << std::endl;
}

void printByReference(A& a){
    std::cout << "Contact: " << a.m_contact << std::endl;
}

int main()
{
    A a;
    A b(a);

    // printByValue(a);
    // printByReference(a);

    return 0;
}
