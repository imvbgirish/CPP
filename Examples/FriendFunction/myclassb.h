#ifndef MYCLASSB_H
#define MYCLASSB_H

// #include "myclassa.h"
class MyClassA;

class MyClassB
{
public:
    MyClassB();
    ~MyClassB();

    void friendOfClassA(MyClassA& obj);
};

#endif // MYCLASSB_H
