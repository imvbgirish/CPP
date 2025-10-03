#ifndef MYCLASS_H
#define MYCLASS_H

#include <iostream>

class MyClass
{
public:
    MyClass();

    void display(){
        std::cout << "Non-Static";
    }

    static void staticDisplay(){
        std::cout << "Static";
    }
};

#endif // MYCLASS_H
