#ifndef ANIMAL_H
#define ANIMAL_H

class Animal
{
public:
    Animal();
    virtual ~Animal();

    virtual void move() = 0;
    virtual void eats() = 0;
};

#endif // ANIMAL_H
