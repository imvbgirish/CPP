#include <iostream>
#include "myclassa.h"

using namespace std;

void friendFunc(MyClassA& obj){
    std::cout << "Name: " << obj.m_name << std::endl;
    std::cout << "Contact: " << obj.m_contact << std::endl;
}

int main()
{
    MyClassA obj("Girish",3456789);
    friendFunc(obj);

    MyClassB obj1;
    obj1.friendOfClassA(obj);

    return 0;
}
