#ifndef MYCLASS_H
#define MYCLASS_H

#include <cstddef>

class MyClass
{
private:
    int arr[3];
    int* m_ptr = nullptr;
public:
    MyClass() = default;
    MyClass(int* ptr,int i, int j, int k);
    ~MyClass();

    void* operator new(std::size_t size);
    void operator delete(void* ptr);
    int operator[](int i);
};

#endif // MYCLASS_H
