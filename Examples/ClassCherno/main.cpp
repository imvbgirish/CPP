#include <iostream>

using namespace std;

class Player{
public:             //By using public: member variables and functions can be made public, which means we can access them from outside.
    int x,y;        //By default, it is private and only member functions can access them.
    int speed;

    void move(int xa, int ya){
        x += xa * speed;
        y += ya * speed;
    }
};

int main()
{
    cout << "Hello World!" << endl;
    Player player; //player is an instance of a class Player
    player.move(1,-1);

    return 0;
}
