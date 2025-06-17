#ifndef MANAGELOGIN_H
#define MANAGELOGIN_H

#include "Person.h"
#include "vehiclemanagement.h"
#include <list>

class ManageLogin
{
public:
    ManageLogin();
    ~ManageLogin();

    void adminMenu();
    void userMenu();

    void adminRegister();
    void userRegister();

    void adminLoginMenu();
    void userLoginMenu();

    void adminLogin();
    void userLogin();

    void mainMenu();

    bool getValidContact(std::string&);
    bool getValidEmail(std::string&);
    bool getValidPassword(std::string&);

private:
    std::list<Person*> m_personData;
    VehicleManagement *manageVehicle;
    FileOperation *file;
};

#endif // MANAGELOGIN_H
