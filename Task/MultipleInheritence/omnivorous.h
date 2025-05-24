#ifndef OMNIVOROUS_H
#define OMNIVOROUS_H

#include "carnivorous.h"
#include "herbivorous.h"

class Omnivorous : public Herbivorous , public Carnivorous
{
    std::string m_food;
public:
    Omnivorous();
    ~Omnivorous();
    Omnivorous(std::string herbFood,std::string carnFood,std::string omnifood);

    void eatMeatGrass();
};

#endif // OMNIVOROUS_H
