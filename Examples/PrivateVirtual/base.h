#ifndef BASE_H
#define BASE_H

class Base
{
public:
    Base();
    virtual ~Base();

    void show();
    void readMe();
    virtual void print();

private:
    virtual void read();
};

#endif // BASE_H
