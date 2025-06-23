#include "mybutton.h"
#include <iostream>

MyButton::MyButton(int length):m_length{length} {}

MyButton::~MyButton()
{

}

void MyButton::print()
{
    std::cout << "Printing length: " << m_length << std::endl;
}
