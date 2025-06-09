#include "admin.h"

Admin::Admin(std::string &name, std::string &contact, std::string &email, std::string &password, std::string &isAdmin)
    :Person(name, contact, email, password, isAdmin){}

Admin::~Admin()
{

}
