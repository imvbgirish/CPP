#include <iostream>

using namespace std;

int add(int a, int b);
int add(int a, int b, int c);
double add(int x, double y);
float add(int x,float y);

int main()
{
    int res1 = add(2,3);
    int res2 = add(8,3,5);
    double res3 = add(3,8.4);
    float res4 = add(2,7);

    cout << "Result 1: " << res1 << endl;
    cout << "Result 2: " << res2 << endl;
    cout << "Result 3: " << res3 << endl;
    cout << "Result 4: " << res4 << endl;

    return 0;
}

int add(int a, int b){
    return a+b;
}

int add(int a, int b, int c){
    return a+b+c;
}

double add(int a, double b){
    return a+b;
}

float add(int x, float y){
    return x+y;
}
