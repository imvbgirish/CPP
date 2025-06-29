#ifndef MYCLASS_H
#define MYCLASS_H

class MyClass
{
public:
    MyClass();
    ~MyClass();

    template <typename T, typename U>
    void printSum(T *number1,U *number2);

    template <typename T, typename U>
    void multiply(T, U);
};

#endif // MYCLASS_H
