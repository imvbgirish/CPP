#ifndef VAN_H
#define VAN_H

#include "vehicle.h"

class Van : private Vehicle
{
public:
    Van();
    ~Van();
    void moveVan();
};

#endif // VAN_H
