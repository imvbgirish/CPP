#ifndef STUDENT_H
#define STUDENT_H

class Student{
private:
    int m_x;
    float m_y;
public:
    Student();

    template<typename T,typename U>
    float getValue(T m1,U m2);

    template<typename T,typename U,typename V>
    float multiply(T m1,U m2,V m3);
};

#endif // STUDENT_H
