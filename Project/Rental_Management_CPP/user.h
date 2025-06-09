#ifndef USER_H
#define USER_H

#include "Person.h"

class User : public Person
{
public:
    User(std::string& name, std::string& contact, std::string& email, std::string& password, std::string& isAdmin);
    ~User();
};

#endif // USER_H
