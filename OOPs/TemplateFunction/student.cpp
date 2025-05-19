#include "student.h"

Student::Student() {}

template<typename T,typename U>
float Student::getValue(T m1,U m2){
    return m1+m2;
}
template float Student::getValue<int,float>(int,float);

template<typename T, typename U, typename V>
float Student::multiply(T m1, U m2, V m3){
    return m1*m2*m3;
}
template float Student::multiply<int,float,int>(int,float,int);
