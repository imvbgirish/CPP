#ifndef ADMIN_H
#define ADMIN_H

#include "Person.h"
class Admin : public Person
{
public:
    Admin(std::string& name, std::string& contact, std::string& email, std::string& password, std::string& isAdmin);
    ~Admin();

};

#endif // ADMIN_H
