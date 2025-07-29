#ifndef STUDENT_H
#define STUDENT_H

#include <string>

class Student
{
private:
    std::string m_name;
    int m_id;
public:
    Student(std::string name, int id);
    ~Student();


    friend std::ostream& operator<<(std::ostream& stream,const Student& s);
};

std::ostream& operator<<(std::ostream& stream,const Student& s);

#endif // STUDENT_H
