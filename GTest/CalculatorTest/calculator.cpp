#include "calculator.h"

Calculator::Calculator() {}

Calculator::Calculator(int a, int b){
    m_a = a;
    m_b = b;
}

int Calculator::add(int a, int b){
    return a+b;
    m_count++;
}

int Calculator::subtract(int a, int b){
    return a-b;
    m_count++;
}

int Calculator::multiply(int a, int b){
    return a * b;
}

int Calculator::divide(int a, int b){
    return a / b;
}

void Calculator::increment()
{
    m_count++;
}

int Calculator::getCount() const
{
    return m_count;
}
