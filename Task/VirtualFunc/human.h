#ifndef HUMAN_H
#define HUMAN_H


#include "animal.h"

class Human : public Animal
{
public:
    Human();
    ~Human();

    void eat() override;
    void move() override;
};

#endif // HUMAN_H
