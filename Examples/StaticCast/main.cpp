#include "myevent.h"
#include "mykeyevent.h"

int main()
{
    MyEvent *event = new MyKeyEvent();
    MyInputEvent *inputEvent = static_cast<MyInputEvent*>(event);
    MyKeyEvent *keyevent = static_cast<MyKeyEvent*>(event);


    MyEvent *event1 = new MyInputEvent();
    MyKeyEvent *keyevent1 = static_cast<MyKeyEvent*>(event1);

    delete keyevent1;
    delete keyevent;

    return 0;
}
