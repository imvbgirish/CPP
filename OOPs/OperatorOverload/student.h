#ifndef STUDENT_H
#define STUDENT_H

class Student{
public:
    Student();
    Student(int marks1,int marks2);
    void setMarks1(int marks1);
    int getMarks1() const;

    void setMarks2(int marks2);
    int getMarks2() const;

    Student operator+(const Student& s) const;
    Student operator-(const Student& s);
    bool operator<(const Student& s) const;

    ~Student();
private:
    int m_marks1;
    int m_marks2;
};

#endif // STUDENT_H
