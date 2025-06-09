#ifndef MYKEYEVENT_H
#define MYKEYEVENT_H

#include "myinputevent.h"

class MyKeyEvent : public MyInputEvent
{
public:
    MyKeyEvent();
    ~MyKeyEvent();

    void printKey();
};

#endif // MYKEYEVENT_H
