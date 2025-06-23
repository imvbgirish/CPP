#include "SmartPointers.h"
#include "mybutton.h"
#include <iostream>

template <typename T>
Pointer<T>::Pointer(T *ptr): m_ptr{ptr}{
    std::cout << "Constructor called" << std::endl;
}

template <typename T>
Pointer<T>::~Pointer()
{
    delete m_ptr;
    std::cout << "Memory deallocated" << std::endl;
}

template <typename T>
T *Pointer<T>::getPtr() const
{
    return m_ptr;
}

template<typename T>
T *Pointer<T>::operator->()
{
    return m_ptr;
}

template class Pointer<int>;
template class Pointer<MyButton>;
