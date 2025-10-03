#ifndef A_H
#define A_H

#include <iostream>

//Constructor Chaining

class A
{
    int m_a;
    char m_b;
public:
    A();
    A(int a){
        m_a = a;
        std::cout << "PC 1" << std::endl;
    }

    A(char b){
        m_b = b;
        std::cout << "PC 2" << std::endl;
    }
};

#endif // A_H
