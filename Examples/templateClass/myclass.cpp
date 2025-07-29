#include "myclass.h"
#include <iostream>

// template <typename T>
// T MyClass<T>::count = 0;

template <typename T>
MyClass<T>::MyClass(T a, T b) {
    this->m_a = a;
    this->m_b = b;
}

template<typename T>
void MyClass<T>::print()
{
    std::cout << m_a << " " << m_b;
    std::cout << count1;
}


template class MyClass<int>;

