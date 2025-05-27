#include "smartdevice.h"
#include <iostream>

SmartDevice::SmartDevice() {
    std::cout << "Smartdevice constructor" << std::endl;
}

SmartDevice::~SmartDevice()
{
    std::cout << "Smartdevice destructor" << std::endl;

}

void SmartDevice::show()
{
    std::cout << "Smart Device display" << std::endl;
}
