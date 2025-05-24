#ifndef CARNIVOROUS_H
#define CARNIVOROUS_H


#include <string>

class Carnivorous
{
private:
    std::string m_food;
public:
    Carnivorous();
    ~Carnivorous();
    Carnivorous(std::string food);
    void eats();
    //void setFood(std::string);
    std::string getCarnivorousFood() const;

protected:
    void eatMeat();
};

#endif // CARNIVOROUS_H
