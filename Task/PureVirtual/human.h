#ifndef HUMAN_H
#define HUMAN_H

#include "horse.h"

class Human : public Horse
{
public:
    Human();
    ~Human();

    // void move() override;
    void eats() override;
};

#endif // HUMAN_H
