#include <iostream>

using namespace std;

class Entity{
private:
    int num;
public:
    string name;
protected:
    float number;
};

class A{
public:
    int a;
};

class Player: public Entity, protected A{
public:
    Player(){
        name = "Girish";
        number = 5.5f;
        a = 2;
    }
};

class Student: protected Player{
public:
    Student(){
        name = "STUDENT";
        number = 4.4f;
        a = 3;
    }
};

int main()
{
    Entity e;
    Player p;
    Student s;

    cout << "Hello World!" << endl;
    return 0;
}
