#ifndef HORSE_H
#define HORSE_H

#include "animal.h"

class Horse : public Animal
{
public:
    Horse();
    ~Horse();

    void eat() override;
};

#endif // HORSE_H
