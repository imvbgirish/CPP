#ifndef MYINPUTEVENT_H
#define MYINPUTEVENT_H

#include "myevent.h"

class MyInputEvent : public MyEvent
{
public:
    MyInputEvent();
    ~MyInputEvent();

    void printInput();
};

#endif // MYINPUTEVENT_H
