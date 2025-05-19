#include "student.h"
#include <iostream>

Student::Student(const std::string &name, int age):m_name{name},m_age{age}{
    std::cout << "Student constructor" << std::endl;
}

Student::~Student(){
    std::cout << "Student destructor" << std::endl;
}

void Student::setName(const std::string& name){
    this->m_name = name;
}

std::string Student::getName() const{
    return m_name;
}

void Student::print(){
    std::cout << "Name: " << m_name << "\n";
    std::cout << "Age: " << m_age << std::endl;
}
