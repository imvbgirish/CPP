#ifndef BASE_H
#define BASE_H

class Base
{
public:
    Base();

    template <typename T>
    T display(T);

    void fun();
};

#endif // BASE_H
