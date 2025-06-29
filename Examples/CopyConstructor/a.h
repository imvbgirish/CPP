#ifndef A_H
#define A_H

class A
{
public:
    A();
    ~A();
    A(const A&);  //must be reference & Shallow copy

    friend void printByValue(A );
    friend void printByReference(A& );

private:
    int m_contact;
};

#endif // A_H
