#include <iostream>

using namespace std;

class Entity{
public:
    // Entity(){   //If we dont create constructor, it is automatically created by compiler
    // }

    // Entity(float x, float y){        //Parameterized constructor
    //     X = x;
    //     Y = y;
    // }

    Entity(){
        cout << "Constructed Entity" << endl;
        X = 0.0f;
        Y = 0.0f;
    }

    //we can make compiler to not to create default constructor, so we cannot instantiate an object
    //Entity() = delete;

    void print(){
        cout << X << ", " << Y << endl;
    }

    ~Entity(){
        cout << "Destroyed Entity" << endl;
    }

private:
    float X, Y;
};


void function(){
    Entity e;
    e.print();
}

int main()
{
    //Entity e(0,0);
    //Entity e;   //Error creating objects, bcoz we deleted default constructor

    function();
    return 0;
}
