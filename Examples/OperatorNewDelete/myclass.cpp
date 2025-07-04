#include "myclass.h"
#include <iostream>

MyClass::MyClass(int *ptr, int i, int j, int k) {
    m_ptr = ptr;
    arr[0] = i;
    arr[1] = j;
    arr[2] = k;
}

MyClass::~MyClass()
{
    std::cout << "destructor called" << std::endl;

}

void* MyClass::operator new(std::size_t size){
    std::cout << "new operator called" << std::endl;
    void *ptr = ::operator new(size);
    return ptr;
}

void MyClass::operator delete(void* ptr){
    std::cout << "delete operator called" << std::endl;
    ::operator delete(ptr);
}

int MyClass::operator[](int i){
    std::cout << "[] operator called" << std::endl;
    std::cout << "ptr value: " << *m_ptr << std::endl;
    return arr[i];
}
