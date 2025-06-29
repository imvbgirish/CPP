#include "myclass.h"
#include <iostream>

MyClass::MyClass() {

}


MyClass::~MyClass()
{

}

template<typename T, typename U>
void MyClass::multiply(T number1, U number2){
    int result = number1 * number2;
    std::cout << "Result: " << result << std::endl;
}


template<typename T, typename U>
void MyClass::printSum(T *number1, U *number2)
{
    int sum = *number1 + *number2;
    std::cout << "Sum: " << sum << std::endl;
}

template void MyClass::printSum<int,float>(int*,float*);
template void MyClass::multiply<int,int>(int,int);
