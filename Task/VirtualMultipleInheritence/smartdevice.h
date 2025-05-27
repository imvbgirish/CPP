#ifndef SMARTDEVICE_H
#define SMARTDEVICE_H

#include "camera.h"
#include "phone.h"


class SmartDevice : public Camera, public Phone
{
public:
    SmartDevice();
    ~SmartDevice();

    void show() override;
};

#endif // SMARTDEVICE_H
