#include <iostream>
//1st case
int s_variable = 10;  //Visible outside of this cpp file

//2nd case
//static int s_variable = 10;   //Not visible outside of this cpp file

//4th case
static void find(){
    std::cout << "static find" << std::endl;  //Not visible outside of this cpp file
}
