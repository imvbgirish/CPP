#ifndef MYCLASS_H
#define MYCLASS_H

template <typename T>
class MyClass
{
    T m_a;
    T m_b;
public:
    MyClass(T a, T b);

    void print();
    // static T count;
    inline static T count1 = 0;
};

#endif // MYCLASS_H
