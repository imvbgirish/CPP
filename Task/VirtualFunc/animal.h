#ifndef ANIMAL_H
#define ANIMAL_H

class Animal
{   
public:
    Animal();
    virtual ~Animal();

    virtual void eat();
    virtual void move();
};

#endif // ANIMAL_H
