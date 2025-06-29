#ifndef STUDENT_H
#define STUDENT_H

#include <string>
class Student
{
public:
    Student();
    ~Student();

    Student(Student& );

    std::string name() const;
    void setName(const std::string &newName);

    double cgpa() const;
    void setCgpa(double newCgpa);

private:
    std::string m_name;
    double m_cgpa;
};

#endif // STUDENT_H
