#include "Person.h"


Person::Person()
{

}

Person::Person(std::string &name, std::string &contactNumber, std::string &email, std::string &password, const std::string &admin)
    :m_name{name}, m_contactNumber{contactNumber}, m_email{email}, m_password{password}, m_isAdmin{admin}
{

}

Person::~Person()
{

}

std::string Person::getName() const
{
    return m_name;
}

void Person::setName(const std::string &newName)
{
    m_name = newName;
}

std::string Person::getContactNumber() const
{
    return m_contactNumber;
}

void Person::setContactNumber(const std::string &newContactNumber)
{
    m_contactNumber = newContactNumber;
}

std::string Person::getEmail() const
{
    return m_email;
}

void Person::setEmail(const std::string &newEmail)
{
    m_email = newEmail;
}

std::string Person::getPassword() const
{
    return m_password;
}

void Person::setPassword(const std::string &newPassword)
{
    m_password = newPassword;
}

std::string Person::getIsAdmin() const
{
    return m_isAdmin;
}

void Person::setIsAdmin(const std::string &newIsAdmin)
{
    m_isAdmin = newIsAdmin;
}
