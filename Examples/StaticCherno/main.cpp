#include <iostream>

using namespace std;

//1st case
//int s_variable = 5;  //Error, saying already defined.

//2nd case
//int s_variable = 15;   //Runs, Output: 15

//3rd case
extern int s_variable;   //Runs for normal int variable, output: 10
//But if the varible is declared as static, it fails.

//4th case
// void find(){
//     cout << "find" << endl;
// }

int main()
{
    cout << s_variable<< endl;
    return 0;
}
