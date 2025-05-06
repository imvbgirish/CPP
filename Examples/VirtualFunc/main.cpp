#include <iostream>

using namespace std;

class Entity{
public:
    virtual string getName(){
        return "Entity";
    }

    string getNaam(){
        return "Naam";
    }
};

class Player: public Entity{
private:
    string m_name;
public:
    Player(const string& name):m_name{name}{}

    string getName() override {
        return m_name;
    }

    string naam(){
        return m_name;
    }

};

void printName(Entity* entity){         //if not virtual then, it calls only base class getName function
    cout << entity->getName() << endl;
}

int main()
{
    //Both calls their corresponding functions
    // Entity* e = new Entity();
    // printName(e);

    Player *p = new Player("Girish");
    printName(p);


    //Both calls base class function
    Entity e1;
    string s1 = e1.getNaam();
    cout << s1 << endl;

    Player p1("Girish");
    string s2 = p1.getNaam();
    cout << s2 << endl;


    return 0;
}
