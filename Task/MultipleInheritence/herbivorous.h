#ifndef HERBIVOROUS_H
#define HERBIVOROUS_H


#include <string>

class Herbivorous
{
    std::string m_food;
public:
    Herbivorous();
    ~Herbivorous();
    Herbivorous(std::string food);
    void eats();
    std::string getHerbivorousFood() const;

protected:
    void eatGrass();
};

#endif // HERBIVOROUS_H
