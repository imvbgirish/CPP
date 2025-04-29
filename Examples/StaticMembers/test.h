#ifndef TEST_H
#define TEST_H

#include <string>

class test{
    static int count;
    std::string name;
public:
    static void increment();
    void printNum();
};

#endif // TEST_H
