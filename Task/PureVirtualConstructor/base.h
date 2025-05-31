#ifndef BASE_H
#define BASE_H

class Base
{
protected:
    int m_value;

public:
    Base();
    Base(int value);
    virtual ~Base();

    virtual void show() = 0;
};

#endif // BASE_H
