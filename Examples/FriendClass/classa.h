#ifndef CLASSA_H
#define CLASSA_H

#include <string>

class ClassA
{
private:
    std::string m_name;
protected:
    int m_contact;

public:
    ClassA();
    ~ClassA();

    friend class ClassB;
};

#endif // CLASSA_H
