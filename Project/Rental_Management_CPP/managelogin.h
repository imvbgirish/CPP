#ifndef MANAGELOGIN_H
#define MANAGELOGIN_H

class ManageLogin
{
public:
    ManageLogin();
    ~ManageLogin();

    void adminMenu();
    void userMenu();

    void registerAdmin();
    void registerUser();

    void adminLoginMenu();
    void userLoginMenu();

    void adminLogin();
    void userLogin();

};

#endif // MANAGELOGIN_H
