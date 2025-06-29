#ifndef MYCLASS_H
#define MYCLASS_H

template <typename T, typename U>
class MyClass
{
public:
    MyClass();
    MyClass(T number1, U number2);
    ~MyClass();

    void print();
    int add();

private:
    T m_number1;
    U m_number2;
};

#endif // MYCLASS_H
