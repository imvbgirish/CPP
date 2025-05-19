#ifndef STUDENT_H
#define STUDENT_H

#include <string>

class Student{
private:
    std::string m_name;
    int m_age;
public:
    Student(const std::string& name,int age);
    void setName(const std::string& name);
    std::string getName() const;
    void print();
    ~Student();
};

#endif // STUDENT_H
