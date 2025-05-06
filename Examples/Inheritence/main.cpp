#include <iostream>

using namespace std;

class Entity{
public:
    float X, Y;

    void move(float xa, float ya){
        X += xa;
        Y += ya;
    }
};

class Player : public Entity{
public:
    const char* Name;

    void printName(){
        cout << Name << endl;
    }
};

int main()
{
    // char* name = "Girish";          //Runs
    // cout << sizeof(name) << " bytes";  //8 bytes

    cout << "Entity: " << sizeof(Entity) << endl;
    cout << "Player: " << sizeof(Player) << endl;

    Player player;
    player.move(5.0f,4.7f);
    player.X = 2;
    player.Y = 4;

    // char *name = "Girish";   //points to first character G
    // cout << name << endl;

    return 0;
}
