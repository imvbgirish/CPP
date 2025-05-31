#ifndef BASE_H
#define BASE_H

class Base
{
    int m_value;
public:
    Base();
    Base(int value);
    Base(const Base&);
    int getValue() const;
    virtual ~Base();

    void print(Base);
};

#endif // BASE_H
