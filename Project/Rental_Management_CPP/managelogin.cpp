#include "managelogin.h"
#include <algorithm>
#include <iostream>

ManageLogin::ManageLogin() {
    std::cout << "ManageLogin Constructor Called\n";
    file = new FileOperation;
    manageVehicle = new VehicleManagement;
    m_personData = file->readPersonData();
}

ManageLogin::~ManageLogin() {
    std::cout << "ManageLogin Destructor Called\n";
    file->writePersonData(m_personData);

    for (auto& person : m_personData)
        delete person;

    delete file;
    delete manageVehicle;
}

enum MainOptions {
    ADMIN_LOGIN = 1,
    USER_LOGIN,
    EXIT_APP
};


void ManageLogin::mainMenu() {
    int choice;
    while (true) {
        std::cout << "\nWelcome to Rental Management System\n"
                  << "1. Admin\n"
                  << "2. User\n"
                  << "3. Exit\n"
                  << "Enter choice: ";
        std::cin >> choice;

        switch (choice) {
        case ADMIN_LOGIN:
            adminLoginMenu();
            break;
        case USER_LOGIN:
            userLoginMenu();
            break;
        case EXIT_APP:
            return;
        default:
            std::cout << "Invalid choice!\n";
        }
    }
}

enum AdminOptions {
    ADD_VEHICLE = 1,
    DELETE_VEHICLE,
    UPDATE_VEHICLE,
    DISPLAY_VEHICLE,
    SEARCH_VEHICLE,
    RETURN_VEHICLE,
    DISPLAY_HISTORY,
    ADMIN_LOGOUT
};

void ManageLogin::adminMenu() {
    int choice;
    while (true) {
        std::cout << "\nAdmin Menu\n"
                  << "1. Add Vehicle\n"
                  << "2. Delete Vehicle\n"
                  << "3. Update Rent Price\n"
                  << "4. Display Vehicles\n"
                  << "5. Search Vehicle\n"
                  << "6. Return Vehicle\n"
                  << "7. Display Rental History\n"
                  << "8. Logout\n"
                  << "Enter choice: ";
        std::cin >> choice;

        switch (choice) {
        case ADD_VEHICLE:
            manageVehicle->addVehicle();
            break;
        case DELETE_VEHICLE:
            manageVehicle->deleteVehicle();
            break;
        case UPDATE_VEHICLE:
            manageVehicle->updateRentPrice();
            break;
        case DISPLAY_VEHICLE:
            manageVehicle->displayVehicle();
            break;
        case SEARCH_VEHICLE:
            manageVehicle->searchVehicle();
            break;
        case RETURN_VEHICLE:
            manageVehicle->returnVehicle();
            break;
        case DISPLAY_HISTORY:
            manageVehicle->displayRentalHistory();
            break;
        case ADMIN_LOGOUT:
            return;
        default: std::cout << "Invalid choice!\n";
        }
    }
}

enum UserOptions {
    VIEW_VEHICLES = 1,
    RENT_VEHICLE,
    SEARCH_VEHICLE_USER,
    USER_LOGOUT
};

void ManageLogin::userMenu() {
    int choice;
    while (true) {
        std::cout << "\nUser Menu\n"
                  << "1. View Vehicles\n"
                  << "2. Rent Vehicle\n"
                  << "3. Search Vehicle\n"
                  << "4. Logout\n"
                  << "Enter choice: ";
        std::cin >> choice;

        switch (choice) {
        case VIEW_VEHICLES:
            manageVehicle->displayVehicle();
            break;
        case RENT_VEHICLE:
            manageVehicle->rentVehicle();
            break;
        case SEARCH_VEHICLE_USER:
            manageVehicle->searchVehicle();
            break;
        case USER_LOGOUT:
            return;
        default:
            std::cout << "Invalid choice!\n";
        }
    }
}

bool ManageLogin::getValidContact(std::string &contact) {
    int attempts = 3;
    while (attempts--) {
        std::cout << "Enter Contact Number (10 digits): ";
        std::cin >> contact;
        if (contact.size() == 10 && std::all_of(contact.begin(), contact.end(), ::isdigit))
            return true;
        std::cout << "Invalid contact number. Attempts left: " << attempts << "\n";
    }
    return false;
}

bool ManageLogin::getValidEmail(std::string &email) {
    int attempts = 3;
    while (attempts--) {
        std::cout << "Enter Email: ";
        std::cin >> email;

        // std::string::npos
        // This is a constant that means "not found".
        // It is a special value representing the largest possible value for size_t (typically -1),
        // and it's used by the find() function to indicate failure.

        if (!email.empty() && email.find('@') != std::string::npos)
            return true;
        std::cout << "Invalid email format. Attempts left: " << attempts << "\n";
    }
    return false;
}

bool ManageLogin::getValidPassword(std::string &password) {
    int attempts = 3;
    while (attempts--) {
        std::cout << "Enter Password: ";
        std::cin >> password;
        if (!password.empty())
            return true;
        std::cout << "Password cannot be empty. Attempts left: " << attempts << "\n";
    }
    return false;
}


enum LoginOptions {
    SIGN_IN = 1,
    SIGN_UP,
    EXIT_LOGIN
};

void ManageLogin::adminLoginMenu() {
    int choice;
    while (true) {
        std::cout << "\nAdmin Login Menu\n"
                  << "1. Sign In\n"
                  << "2. Sign Up\n"
                  << "3. Exit\n"
                  << "Enter choice: ";
        std::cin >> choice;

        switch (choice) {
        case SIGN_IN:
            adminLogin();
            break;
        case SIGN_UP:
            adminRegister();
            break;
        case EXIT_LOGIN:
            return;
        default:
            std::cout << "Invalid choice!\n";
        }
    }
}

void ManageLogin::userLoginMenu() {
    int choice;
    while (true) {
        std::cout << "\nUser Login Menu\n"
                  << "1. Sign In\n"
                  << "2. Sign Up\n"
                  << "3. Exit\n"
                  << "Enter choice: ";
        std::cin >> choice;

        switch (choice) {
        case SIGN_IN:
            userLogin();
            break;
        case SIGN_UP:
            userRegister();
            break;
        case EXIT_LOGIN:
            return;
        default:
            std::cout << "Invalid choice!\n";
        }
    }
}

void ManageLogin::adminRegister() {
    std::string name, contact, email, password;

    std::cout << "Enter Name: ";
    std::cin >> name;

    if (!getValidContact(contact)) return;
    if (!getValidEmail(email)) return;
    if (!getValidPassword(password)) return;

    m_personData.push_back(new Person(name, contact, email, password, "yes"));
    std::cout << "Admin Registered Successfully\n";
}


void ManageLogin::userRegister() {
    std::string name, contact, email, password;

    std::cout << "Enter Name: ";
    std::cin >> name;

    if (!getValidContact(contact)) return;
    if (!getValidEmail(email)) return;
    if (!getValidPassword(password)) return;

    m_personData.push_back(new Person(name, contact, email, password, "no"));
    std::cout << "User Registered Successfully\n";
}


void ManageLogin::adminLogin() {
    std::string email, password;
    int attempts = 3;

    while (attempts--) {
        if (!getValidEmail(email)) return;
        if (!getValidPassword(password)) return;

        for (auto person : m_personData) {
            if (person->getEmail() == email && person->getPassword() == password && person->getIsAdmin() == "yes") {
                std::cout << "Admin Login Successful\n";
                adminMenu();
                return;
            }
        }

        std::cout << "Invalid Admin Credentials. Attempts left: " << attempts << "\n";
    }

    std::cout << "Login failed. Returning to menu.\n";
}


void ManageLogin::userLogin() {
    std::string email, password;
    int attempts = 3;

    while (attempts--) {
        if (!getValidEmail(email)) return;
        if (!getValidPassword(password)) return;

        for (auto person : m_personData) {
            if (person->getEmail() == email && person->getPassword() == password && person->getIsAdmin() == "no") {
                std::cout << "User Login Successful\n";
                userMenu();
                return;
            }
        }

        std::cout << "Invalid User Credentials. Attempts left: " << attempts << "\n";
    }

    std::cout << "Login failed. Returning to menu.\n";
}
