#include <iostream>

using namespace std;

class Student{
private:
    string name;
    int contact;
public:
    void getname();
};

struct Player{
private:
    string name;
    int num;
public:
    void getname();
};

int main()
{
    Student s;
    s.getname();

    Player p;
    p.getname();

    cout << "Hello World!" << endl;
    return 0;
}
