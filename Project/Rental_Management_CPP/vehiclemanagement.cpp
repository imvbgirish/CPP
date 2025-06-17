#include "vehiclemanagement.h"
#include "rentalbike.h"
#include "rentalcar.h"
#include <iostream>
#include <iomanip>

VehicleManagement::VehicleManagement()
{
    file = new FileOperation;
    m_vehicles = file->readVehicleData();
    m_bookings = file->readBookingDetails();
}

VehicleManagement::~VehicleManagement()
{
    file->writeVehicleData(m_vehicles);
    file->writeBookingDetails(m_bookings);

    for (auto v : m_vehicles)
        delete v;
    for (auto b : m_bookings)
        delete b;

    delete file;
}

void VehicleManagement::addBike()
{
    std::string type = "Bike", brand, model, number, status = "Available";
    int price;
    std::cout << "Enter Brand: ";
    std::cin >> brand;
    std::cout << "Enter Model: ";
    std::cin >> model;
    std::cout << "Enter Vehicle Number: ";
    std::cin >> number;
    std::cout << "Enter Rent Price: ";
    std::cin >> price;

    m_vehicles.push_back(new RentalBike(type, brand, model, number, status, price));
    std::cout << "Bike added successfully.\n";
}

void VehicleManagement::addCar()
{
    std::string type = "Car", brand, model, number, status = "Available";
    int price;
    std::cout << "Enter Brand: ";
    std::cin >> brand;
    std::cout << "Enter Model: ";
    std::cin >> model;
    std::cout << "Enter Vehicle Number: ";
    std::cin >> number;
    std::cout << "Enter Rent Price: ";
    std::cin >> price;

    m_vehicles.push_back(new RentalCar(type, brand, model, number, status, price));
    std::cout << "Car added successfully.\n";
}

void VehicleManagement::displayBike()
{
    std::cout << "\n\t\t\tList of Bikes\n";
    std::cout << std::left << std::setw(15) << "Type" << std::setw(15) << "Brand" << std::setw(15)
              << "Model" << std::setw(20) << "Number" << std::setw(15) << "Status" << std::setw(10)
              << "Price" << std::endl;

    std::cout << std::string(90, '-') << std::endl;

    for (auto v : m_vehicles)
    {
        if (v->getVehicleType() == "Bike")
        {
            std::cout << std::left << std::setw(15) << v->getVehicleType()
            << std::setw(15) << v->getBrand()
            << std::setw(15) << v->getModel()
            << std::setw(20) << v->getVehicleNumber()
            << std::setw(15) << v->getStatus()
            << std::setw(10) << v->getRentPrice() << std::endl;
        }
    }
}
void VehicleManagement::displayCar()
{
    std::cout << "\n\t\t\tList of Cars\n";
    std::cout << std::left << std::setw(15) << "Type" << std::setw(15) << "Brand" << std::setw(15)
              << "Model" << std::setw(20) << "Number" << std::setw(15) << "Status" << std::setw(10)
              << "Price" << std::endl;

    std::cout << std::string(90, '-') << std::endl;

    for (auto v : m_vehicles)
    {
        if (v->getVehicleType() == "Car")
        {
            std::cout << std::left << std::setw(15) << v->getVehicleType()
            << std::setw(15) << v->getBrand()
            << std::setw(15) << v->getModel()
            << std::setw(20) << v->getVehicleNumber()
            << std::setw(15) << v->getStatus()
            << std::setw(10) << v->getRentPrice() << std::endl;
        }
    }
}

void VehicleManagement::searchBike()
{
    std::string number;
    std::cout << "Enter Bike Number to Search: ";
    std::cin >> number;
    for (auto v : m_vehicles)
    {
        if (v->getVehicleType() == "Bike" && v->getVehicleNumber() == number)
        {
            std::cout << "Bike Found: " << v->getBrand() << " " << v->getModel() << ", Status: " << v->getStatus() << std::endl;
            return;
        }
    }
    std::cout << "Bike not found.\n";
}

void VehicleManagement::searchCar()
{
    std::string number;
    std::cout << "Enter Car Number to Search: ";
    std::cin >> number;
    for (auto v : m_vehicles)
    {
        if (v->getVehicleType() == "Car" && v->getVehicleNumber() == number)
        {
            std::cout << "Car Found: " << v->getBrand() << " " << v->getModel() << ", Status: " << v->getStatus() << std::endl;
            return;
        }
    }
    std::cout << "Car not found.\n";
}

void VehicleManagement::rentBike()
{
    std::string number;
    std::cout << "Enter bike number to rent: ";
    std::cin >> number;

    for (RentVehicles* v : m_vehicles)
    {
        if (v->getVehicleType() == "Bike" && v->getVehicleNumber() == number)
        {
            if (v->getStatus() == "Booked")
            {
                std::cout << "Bike is already booked.\n";
                return;
            }

            std::string name, contact;
            int duration;
            std::cout << "Enter Name: ";
            std::cin >> name;
            std::cout << "Enter Contact Number: ";
            std::cin >> contact;
            std::cout << "Enter Rent Duration (in days): ";
            std::cin >> duration;

            int total = duration * v->getRentPrice();
            std::cout << "Total Amount: " << total << std::endl;

            int attempts = 3;
            while (attempts--)
            {
                int method;
                std::cout << "Select Payment Method: 1. Cash  2. UPI\n"
                             "Enter choice: ";
                std::cin >> method;

                if (method == 1)
                {
                    int amount;
                    std::cout << "Enter Paid Amount: ";
                    std::cin >> amount;
                    if (amount == total)
                    {
                        v->setStatus("Booked");
                        BookingDetails* book = new BookingDetails(name, contact, duration, v, nullptr);
                        m_bookings.push_back(book);
                        std::cout << "Bike rented successfully with Cash.\n";
                        return;
                    }
                }
                else if (method == 2)
                {
                    std::string paymentType = "UPI", paymentID, paidAmount;
                    std::cout << "Enter Payment ID: ";
                    std::cin >> paymentID;
                    std::cout << "Enter Paid Amount: ";
                    std::cin >> paidAmount;

                    if (std::stoi(paidAmount) == total)
                    {
                        std::string paymentStatus = "Paid";
                        v->setStatus("Booked");
                        PaymentMode* pay = new PaymentMode(paymentType, paymentID, paymentStatus, paidAmount);
                        BookingDetails* book = new BookingDetails(name, contact, duration, v, pay);

                        m_bookings.push_back(book);
                        std::cout << "Bike rented successfully with UPI.\n";
                        return;
                    }
                }

                std::cout << "Incorrect payment. Attempts left: " << attempts << std::endl;
            }
            std::cout << "Payment failed after 3 attempts.\n";
            return;
        }
    }
    std::cout << "Bike not found.\n";
}


void VehicleManagement::rentCar()
{
    std::string number;
    std::cout << "Enter car number to rent: ";
    std::cin >> number;

    for (RentVehicles* v : m_vehicles)
    {
        if (v->getVehicleType() == "Car" && v->getVehicleNumber() == number)
        {
            if (v->getStatus() == "Booked")
            {
                std::cout << "Car is already booked.\n";
                return;
            }

            std::string name, contact;
            int duration;
            std::cout << "Enter Name: ";
            std::cin >> name;
            std::cout << "Enter Contact Number: ";
            std::cin >> contact;
            std::cout << "Enter Rent Duration (in days): ";
            std::cin >> duration;

            int total = duration * v->getRentPrice();
            std::cout << "Total Amount: " << total << std::endl;

            int attempts = 3;
            while (attempts--)
            {
                int method;
                std::cout << "Select Payment Method: 1. Cash  2. UPI\nEnter choice: ";
                std::cin >> method;

                if (method == 1)
                {
                    std::string amount;
                    std::cout << "Enter Paid Amount: ";
                    std::cin >> amount;

                    if (std::stoi(amount) == total)
                    {
                        v->setStatus("Booked");
                        BookingDetails* book = new BookingDetails(name, contact, duration, v, nullptr);
                        m_bookings.push_back(book);
                        std::cout << "Car rented successfully with Cash!\n";
                        return;
                    }
                }
                else if (method == 2)
                {
                    std::string paymentType = "UPI", paymentID, paidAmount;
                    std::cout << "Enter Payment ID: ";
                    std::cin >> paymentID;
                    std::cout << "Enter Paid Amount: ";
                    std::cin >> paidAmount;

                    if (std::stoi(paidAmount) == total)
                    {
                        std::string paymentStatus = "Paid";
                        v->setStatus("Booked");
                        PaymentMode* pay = new PaymentMode(paymentType, paymentID, paymentStatus, paidAmount);
                        BookingDetails* book = new BookingDetails(name, contact, duration, v, pay);

                        m_bookings.push_back(book);
                        std::cout << "Bike rented successfully with UPI.\n";
                        return;
                    }
                }

                std::cout << "Incorrect payment. Attempts left: " << attempts << std::endl;
            }
            std::cout << "Payment failed after 3 attempts.\n";
            return;
        }
    }
    std::cout << "Car not found.\n";
}

void VehicleManagement::returnBike()
{
    std::string number;
    std::cout << "Enter bike number to return: ";
    std::cin >> number;

    for (auto v : m_vehicles)
    {
        if (v->getVehicleType() == "Bike" && v->getVehicleNumber() == number)
        {
            if (v->getStatus() == "Available")
            {
                std::cout << "Bike is already available.\n";
                return;
            }
            v->setStatus("Available");
            std::cout << "Bike returned successfully.\n";
            return;
        }
    }
    std::cout << "Bike not found.\n";
}

void VehicleManagement::returnCar()
{
    std::string number;
    std::cout << "Enter car number to return: ";
    std::cin >> number;

    for (auto v : m_vehicles)
    {
        if (v->getVehicleType() == "Car" && v->getVehicleNumber() == number)
        {
            if (v->getStatus() == "Available")
            {
                std::cout << "Car is already available.\n";
                return;
            }
            v->setStatus("Available");
            std::cout << "Car returned successfully.\n";
            return;
        }
    }
    std::cout << "Car not found.\n";
}

void VehicleManagement::deleteBike()
{
    std::string number;
    std::cout << "Enter Bike number to delete: ";
    std::cin >> number;
    for (auto it = m_vehicles.begin(); it != m_vehicles.end(); ++it)
    {
        if ((*it)->getVehicleType() == "Bike" && (*it)->getVehicleNumber() == number)
        {
            delete *it;
            m_vehicles.erase(it);
            std::cout << "Bike deleted successfully.\n";
            return;
        }
    }
    std::cout << "Bike not found.\n";
}

void VehicleManagement::deleteCar()
{
    std::string number;
    std::cout << "Enter Car number to delete: ";
    std::cin >> number;
    for (auto it = m_vehicles.begin(); it != m_vehicles.end(); ++it)
    {
        if ((*it)->getVehicleType() == "Car" && (*it)->getVehicleNumber() == number)
        {
            delete *it;
            m_vehicles.erase(it);
            std::cout << "Car deleted successfully.\n";
            return;
        }
    }
    std::cout << "Car not found.\n";
}

void VehicleManagement::sortBikeByPrice()
{
    m_vehicles.sort([](RentVehicles* a, RentVehicles* b)
                    {
                        if (a->getVehicleType() == "Bike" && b->getVehicleType() == "Bike")
                            return a->getRentPrice() < b->getRentPrice();
                        return false;
                    });
    std::cout << "Bikes sorted by price.\n";
}

void VehicleManagement::sortCarByPrice()
{
    m_vehicles.sort([](RentVehicles* a, RentVehicles* b)
                    {
                        if (a->getVehicleType() == "Car" && b->getVehicleType() == "Car")
                            return a->getRentPrice() < b->getRentPrice();
                        return false;
                    });
    std::cout << "Cars sorted by price.\n";
}

void VehicleManagement::updateBikePrice()
{
    std::string number;
    std::cout << "Enter Bike number to update price: ";
    std::cin >> number;
    for (RentVehicles* v : m_vehicles)
    {
        if (v->getVehicleType() == "Bike" && v->getVehicleNumber() == number)
        {
            int newPrice;
            std::cout << "Enter new rent price: ";
            std::cin >> newPrice;
            v->setRentPrice(newPrice);

            std::cout << "Price updated.\n";
            return;
        }
    }
    std::cout << "Bike not found.\n";
}

void VehicleManagement::updateCarPrice()
{
    std::string number;
    std::cout << "Enter Car number to update price: ";
    std::cin >> number;
    for (auto v : m_vehicles)
    {
        if (v->getVehicleType() == "Car" && v->getVehicleNumber() == number)
        {
            int newPrice;
            std::cout << "Enter new rent price: ";
            std::cin >> newPrice;
            v->setRentPrice(newPrice);

            std::cout << "Price updated.\n";
            return;
        }
    }
    std::cout << "Car not found.\n";
}

void VehicleManagement::displayRentalHistory()
{
    std::cout << "\n\t\t\tRental History\n";
    std::cout << std::left << std::setw(15) << "Name" << std::setw(15) << "Contact" << std::setw(10)
              << "Days" << std::setw(15) << "VehicleNo" << std::setw(15) << "Type" << std::setw(10) << "Price" << std::endl;
    std::cout << std::string(80, '-') << std::endl;

    for (BookingDetails* b : m_bookings)
    {
        RentVehicles* v = b->getRentalVehicleDetails();
        std::cout << std::left << std::setw(15) << b->getName()
                  << std::setw(15) << b->getContactNumber()
                  << std::setw(10) << b->getRentDuration()
                  << std::setw(15) << v->getVehicleNumber()
                  << std::setw(15) << v->getVehicleType()
                  << std::setw(10) << v->getRentPrice() << std::endl;
    }
}

void VehicleManagement::addVehicle()
{
    int choice;
    std::cout << "\n======= ADD VEHICLE =======\n";
    std::cout << "1. Add Bike\n";
    std::cout << "2. Add Car\n";
    std::cout << "3. Exit\n";
    std::cout << "Enter your choice: ";
    std::cin >> choice;

    switch (choice)
    {
    case 1:
        addBike();
        break;
    case 2:
        addCar();
        break;
    case 3:
        std::cout << "Exiting add menu.\n";
        return;
    default:
        std::cout << "Invalid choice. Try again.\n";
        break;
    }
}

void VehicleManagement::displayVehicle()
{
    int choice;
    std::cout << "\n======= DISPLAY VEHICLES =======\n";
    std::cout << "1. Display Bikes\n";
    std::cout << "2. Display Cars\n";
    std::cout << "3. Exit\n";
    std::cout << "Enter your choice: ";
    std::cin >> choice;

    switch (choice)
    {
    case 1:
        displayBike();
        break;
    case 2:
        displayCar();
        break;
    case 3:
        std::cout << "Exiting display menu.\n";
        return;
    default:
        std::cout << "Invalid choice. Try again.\n";
        break;
    }
}

void VehicleManagement::updateRentPrice()
{
    int choice;

    std::cout << "\n======= UPDATE RENT PRICE =======\n";
    std::cout << "1. Update Bike Price\n";
    std::cout << "2. Update Car Price\n";
    std::cout << "3. Exit\n";
    std::cout << "Enter your choice: ";
    std::cin >> choice;

    switch (choice)
    {
    case 1:
        updateBikePrice();
        break;
    case 2:
        updateCarPrice();
        break;
    case 3:
        std::cout << "Exiting update menu.\n";
        return;
    default:
        std::cout << "Invalid choice. Try again.\n";
        break;
    }
}

void VehicleManagement::searchVehicle()
{
    int choice;
    std::cout << "\n======= SEARCH VEHICLES =======\n";
    std::cout << "1. Search Bike\n";
    std::cout << "2. Search Car\n";
    std::cout << "3. Exit\n";
    std::cout << "Enter your choice: ";
    std::cin >> choice;

    switch (choice)
    {
    case 1:
        searchBike();
        break;
    case 2:
        searchCar();
        break;
    case 3:
        std::cout << "Exiting search menu.\n";
        return;
    default:
        std::cout << "Invalid choice. Try again.\n";
        break;
    }
}

void VehicleManagement::rentVehicle()
{
    int choice;
    std::cout << "\n======= RENT VEHICLE =======\n";
    std::cout << "1. Rent Bike\n";
    std::cout << "2. Rent Car\n";
    std::cout << "3. Exit\n";
    std::cout << "Enter your choice: ";
    std::cin >> choice;

    switch (choice)
    {
    case 1:
        rentBike();
        break;
    case 2:
        rentCar();
        break;
    case 3:
        std::cout << "Exiting rent menu.\n";
        return;
    default:
        std::cout << "Invalid choice. Try again.\n";
        break;
    }
}

void VehicleManagement::returnVehicle()
{
    int choice;
    std::cout << "\n======= RETURN VEHICLE =======\n";
    std::cout << "1. Return Bike\n";
    std::cout << "2. Return Car\n";
    std::cout << "3. Exit\n";
    std::cout << "Enter your choice: ";
    std::cin >> choice;

    switch (choice)
    {
    case 1:
        returnBike();
        break;
    case 2:
        returnCar();
        break;
    case 3:
        std::cout << "Exiting return menu.\n";
        return;
    default:
        std::cout << "Invalid choice. Try again.\n";
        break;
    }
}

void VehicleManagement::deleteVehicle()
{
    int choice;
    std::cout << "\n======= DELETE VEHICLE =======\n";
    std::cout << "1. Delete Bike\n";
    std::cout << "2. Delete Car\n";
    std::cout << "3. Exit\n";
    std::cout << "Enter your choice: ";
    std::cin >> choice;

    switch (choice)
    {
    case 1:
        deleteBike();
        break;
    case 2:
        deleteCar();
        break;
    case 3:
        std::cout << "Exiting delete menu.\n";
        return;
    default:
        std::cout << "Invalid choice. Try again.\n";
        break;
    }
}

void VehicleManagement::sortVehicle()
{
    int choice;
    std::cout << "\n======= SORT VEHICLES BY PRICE =======\n";
    std::cout << "1. Sort Bikes\n";
    std::cout << "2. Sort Cars\n";
    std::cout << "3. Exit\n";
    std::cout << "Enter your choice: ";
    std::cin >> choice;

    switch (choice)
    {
    case 1:
        sortBikeByPrice();
        break;
    case 2:
        sortCarByPrice();
        break;
    case 3:
        std::cout << "Exiting sort menu.\n";
        return;
    default:
        std::cout << "Invalid choice. Try again.\n";
        break;
    }
}
