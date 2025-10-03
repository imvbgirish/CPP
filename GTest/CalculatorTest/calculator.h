#ifndef CALCULATOR_H
#define CALCULATOR_H

class Calculator
{
    int m_a;
    int m_b;
    int m_count;
public:
    Calculator();
    Calculator(int, int);

    int add(int a, int b);
    int subtract(int a, int b);
    static int multiply(int a, int b);
    static int divide(int a, int b);

    void increment();
    int getCount() const;
};

#endif // CALCULATOR_H
