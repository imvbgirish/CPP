#include <iostream>

using namespace std;

class Printable{
public:
    virtual string getClassName() = 0;  //Pure virtual function, we cannot create objects out of it.
};

class Entity: public Printable{
public:
    string getClassName() override {
        return "Entity";
    }
};

class Player: public Entity{
public:
    string getClassName() override {
        return "Player";
    }
};

void print(Printable* obj){
    cout << obj->getClassName() << endl;
}

int main()
{
    Entity *e = new Entity;
    print(e);

    Player *p = new Player;
    print(p);

    return 0;
}
