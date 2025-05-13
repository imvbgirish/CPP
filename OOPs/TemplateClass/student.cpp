#include "student.h"
#include <iostream>

template<typename T, typename U>
Student<T, U>::Student(T m1, U m2):m_marks1{m1},m_marks2{m2}{}

template<typename T, typename U>
Student<T, U>::~Student(){
    std::cout << "Destructor called" << std::endl;
}

template<typename T,typename U>
float Student<T,U>::getMarks() const{
    return m_marks1 + m_marks2;
}

template<typename T, typename U>
T Student<T, U>::multiply(){
    return m_marks1*m_marks2;
}

template class Student<int,float>;
