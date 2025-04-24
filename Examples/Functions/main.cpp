#include <iostream>

using namespace std;

inline int largest(int &x, int &y){
    if(x>y)
        return x;
    else {
        return y;
    }
}

string fullName(const string *name){
    return *name + " V B";
}

int main()
{
    cout << "Hello World!" << endl;
    int a = 3, b = 5;
    int res = max(a,b);
    int ans = largest(a,b);

    string name = "Girish";
    //string myName = fullName(&name);

    cout << fullName(&name) << endl;

    cout << ans << endl;
    cout << res << endl;

    return 0;
}
