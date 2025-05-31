#ifndef HORSE_H
#define HORSE_H

#include "animal.h"

class Horse : public Animal
{
public:
    Horse();
    ~Horse();

    void move() override;

};

#endif // HORSE_H
