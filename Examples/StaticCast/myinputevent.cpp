#include "myinputevent.h"
#include <iostream>

MyInputEvent::MyInputEvent() {}

MyInputEvent::~MyInputEvent()
{

}

void MyInputEvent::printInput()
{
    std::cout << "MyInputEvent is printing" << std::endl;
}
