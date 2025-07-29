#include "student.h"
#include <iostream>

Student::Student(std::string name, int id):m_name{name},m_id{id} {}

Student::~Student()
{

}
std::ostream& operator<<(std::ostream& stream,const Student& s){
    stream << s.m_name << "," << s.m_id ;
    return stream;
 }

