#include "student.h"
#include <iostream>

Student::Student(){
    std::cout << "Default constructor called" << std::endl;
}

Student::Student(int marks1, int marks2){
    std::cout << "Parameterized Constructer called" << std::endl;
    this->m_marks1 = marks1;
    this->m_marks2 = marks2;
}

Student::Student(Student &other)
{
    this->m_marks1 = other.m_marks1;
    this->m_marks2 = other.m_marks2;
    std::cout << "copy constructor called" << std::endl;
}

void Student::setMarks1(int marks1){
    if(marks1<0){
        std::cout << "less than zero" << std::endl;
    }
    this->m_marks1 = marks1;
}

void Student::setMarks2(int marks2){
    if(marks2<0){
        std::cout << "less than zero" << std::endl;
    }
    this->m_marks2 = marks2;
}

int Student::getMarks2() const{
    return m_marks2;
}

Student Student::operator+(const Student& s) const{
    Student temp;
    temp.m_marks1 = this->m_marks1 + s.m_marks1;
    temp.m_marks2 = this->m_marks2 + s.m_marks2;
    return temp;
}

Student Student::operator-(const Student& s){
    Student temp;
    temp.m_marks1 = this->m_marks1 - s.m_marks1;
    temp.m_marks2 = this->m_marks2 - s.m_marks2;
    return temp;
}

bool Student::operator<(const Student &s) const{
    return (this->m_marks1 < s.m_marks1) &&
           (this->m_marks2 < s.m_marks2);
}

bool Student::operator>(const Student &s) const
{
    return (this->m_marks1 > s.m_marks1) &&
           (this->m_marks1 > s.m_marks2);
}

int Student::getMarks1() const{
    return m_marks1;
}

Student::~Student(){
    std::cout << "Destructor called" << std::endl;
}
