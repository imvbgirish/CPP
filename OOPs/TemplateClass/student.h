#ifndef STUDENT_H
#define STUDENT_H

template<typename T,typename U>
class Student{
private:
    T m_marks1;
    U m_marks2;
public:
    Student(T m1,U m2);
    ~Student();

    float getMarks() const;

    T multiply();
};

#endif // STUDENT_H
