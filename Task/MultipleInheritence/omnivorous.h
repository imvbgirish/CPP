#ifndef OMNIVOROUS_H
#define OMNIVOROUS_H

#include "carnivorous.h"
#include "herbivorous.h"

class Omnivorous : public Herbivorous , public Carnivorous
{
public:
    Omnivorous();
    ~Omnivorous();

    void eatMeatGrass();
};

#endif // OMNIVOROUS_H
