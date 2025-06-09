#include "mykeyevent.h"
#include <iostream>

MyKeyEvent::MyKeyEvent() {}

MyKeyEvent::~MyKeyEvent()
{

}

void MyKeyEvent::printKey()
{
    std::cout << "MyKeyEvent is printing" << std::endl;
}
