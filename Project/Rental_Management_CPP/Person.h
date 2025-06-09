#ifndef PERSON_H
#define PERSON_H

#include <string>

class Person
{
public:
    Person(std::string name,std::string contactNumber,std::string email,std::string password,std::string admin);
    ~Person();

    std::string name() const;
    void setName(const std::string &newName);

    std::string contactNumber() const;
    void setContactNumber(const std::string &newContactNumber);

    std::string email() const;
    void setEmail(const std::string &newEmail);

    std::string password() const;
    void setPassword(const std::string &newPassword);

    std::string isAdmin() const;
    void setIsAdmin(const std::string &newIsAdmin);

private:
    std::string m_name;
    std::string m_contactNumber;
    std::string m_email;
    std::string m_password;
    std::string m_isAdmin;
};

#endif // PERSON_H
