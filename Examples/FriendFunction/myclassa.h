#ifndef MYCLASSA_H
#define MYCLASSA_H

#include "myclassb.h"
#include <string>

// class MyClassB;

class MyClassA
{
public:
    MyClassA(const std::string&, int);
    ~MyClassA();

    friend void friendFunc(MyClassA& obj);
    friend void MyClassB::friendOfClassA(MyClassA&);

private:
    int m_contact;

protected:
    std::string m_name;
};

#endif // MYCLASSA_H
