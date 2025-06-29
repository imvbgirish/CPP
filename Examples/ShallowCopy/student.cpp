#include "student.h"

Student::Student() {}

Student::~Student()
{

}

Student::Student(Student &student)
{
    m_name = student.m_name;
    m_cgpa = student.m_cgpa;
}

std::string Student::name() const
{
    return m_name;
}

void Student::setName(const std::string &newName)
{
    m_name = newName;
}

double Student::cgpa() const
{
    return m_cgpa;
}

void Student::setCgpa(double newCgpa)
{
    m_cgpa = newCgpa;
}
