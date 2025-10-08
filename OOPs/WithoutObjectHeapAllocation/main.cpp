#include <iostream>

using namespace std;

class Base{
public:
    void work(){
        cout << "I'm Working" << endl;
    }
};

int main()
{
    (new Base)->work();
    return 0;
}
