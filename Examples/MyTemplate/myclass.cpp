#include "myclass.h"
#include <iostream>

template<typename T, typename U>
MyClass<T,U>::MyClass() {

}

template<typename T, typename U>
MyClass<T,U>::MyClass(T number1, U number2)
{
    m_number1 = number1;
    m_number2 = number2;
}

template<typename T, typename U>
MyClass<T,U>::~MyClass()
{

}

template<typename T, typename U>
void MyClass<T,U>::print(){
    std::cout << "Number 1: " << m_number1 << std::endl;
    std::cout << "Number 2: " << m_number2 << std::endl;
}

template<typename T, typename U>
int MyClass<T, U>::add()
{
    // int sum = m_number1 + m_number2;
    return m_number1 + m_number2;
}

template class MyClass<int,float>;
