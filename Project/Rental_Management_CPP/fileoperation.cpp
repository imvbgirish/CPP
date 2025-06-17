#include "fileoperation.h"
#include "Person.h"
#include "rentvehicles.h"
#include "paymentMode.h"
#include "bookingdetails.h"
#include <fstream>
#include <sstream>
#include <iostream>

FileOperation::FileOperation() {
    std::cout<<"FileOperation Constructor" <<std::endl;
}
FileOperation::~FileOperation() {
    std::cout<<"FileOperation Destructor" <<std::endl;

}

void FileOperation::writeVehicleData(std::list<RentVehicles *> vehicleList) {
    std::ofstream outFile("vehicles.csv");
    if (!outFile.is_open()) {
        std::cerr << "Error opening file for writing vehicle data." << std::endl;
        return;
    }

    for (const auto& vehicle : vehicleList) {
        outFile << vehicle->getVehicleType() << ","
                << vehicle->getBrand()<< ","
                << vehicle->getModel() << ","
                << vehicle->getVehicleNumber() << ","
                << vehicle->getStatus() << ","
                << vehicle->getRentPrice() << "\n";
    }
    outFile.close();
}

std::list<RentVehicles*> FileOperation::readVehicleData() {
    std::list<RentVehicles*> vehicles;
    std::ifstream inFile("vehicles.csv");
    std::string line;

    if (!inFile.is_open()) {
        std::cerr << "Error opening file for reading vehicle data." << std::endl;
        return vehicles;
    }

    while (std::getline(inFile, line)) {
        std::stringstream ss(line);
        std::string type, brand, model, number, status, priceStr;
        int price = 0;

        try {
            std::getline(ss, type, ',');
            std::getline(ss, brand, ',');
            std::getline(ss, model, ',');
            std::getline(ss, number, ',');
            std::getline(ss, status, ',');
            std::getline(ss, priceStr);

            price = std::stoi(priceStr);

            RentVehicles* vehicle = new RentVehicles(type, brand, model, number, status, price);
            vehicles.push_back(vehicle);

            // std::cout << "Vehicle Type: " << vehicle->getVehicleType() << std::endl;

        } catch (const std::exception& e) {
            std::cerr << "Error parsing vehicle data: " << e.what() << std::endl;
        }
    }

    inFile.close();
    return vehicles;
}

void FileOperation::writePersonData(const std::list<Person*> personList) {
    std::ofstream outFile("persons.csv");
    if (!outFile.is_open()) {
        std::cerr << "Error opening file for writing person data." << std::endl;
        return;
    }

    for (const auto& person : personList) {
        outFile << person->getName() << ","
                << person->getContactNumber() << ","
                << person->getEmail() << ","
                << person->getPassword() << ","
                << person->getIsAdmin() << "\n";
    }
    outFile.close();
}

std::list<Person*> FileOperation::readPersonData() {
    std::list<Person*> persons;
    std::ifstream inFile("persons.csv");
    std::string line;

    if (!inFile.is_open()) {
        std::cerr << "Error opening file for reading person data." << std::endl;
        return persons;
    }

    while (std::getline(inFile, line)) {
        std::stringstream ss(line);
        std::string name, contact, email, password, admin;

        try {
            std::getline(ss, name, ',');
            std::getline(ss, contact, ',');
            std::getline(ss, email, ',');
            std::getline(ss, password, ',');
            std::getline(ss, admin);


            Person* person = new Person(name, contact, email, password, admin);
            persons.push_back(person);

            // std::cout << "Name: " << name << std::endl;

        } catch (const std::exception& e) {
            std::cerr << "Error parsing person data: " << e.what() << std::endl;
        }
    }

    inFile.close();
    return persons;
}

void FileOperation::writeBookingDetails(const std::list<BookingDetails*> bookings) {
    std::ofstream outFile("bookings.csv");
    if (!outFile.is_open()) {
        std::cerr << "Error opening file for writing booking data." << std::endl;
        return;
    }

    for (const auto& booking : bookings) {
        outFile << booking->getName() << ","
                << booking->getContactNumber() << ","
                << booking->getRentDuration() << ",";

        RentVehicles* vehicle = booking->getRentalVehicleDetails();
        if (vehicle) {
            outFile << vehicle->getVehicleType() << ","
                    << vehicle->getBrand() << ","
                    << vehicle->getModel() << ","
                    << vehicle->getVehicleNumber() << ","
                    << vehicle->getStatus() << ","
                    << vehicle->getRentPrice() << ",";
        }

        PaymentMode* payment = booking->getPayment();
        if (payment) {
            outFile << payment->getPaymentType() << ","
                    << payment->getPaymentID() << ","
                    << payment->getPaymentStatus() << ","
                    << payment->getPaidAmount();
        }

        outFile << "\n";
    }
    outFile.close();
}

std::list<BookingDetails *> FileOperation::readBookingDetails() {
    std::list<BookingDetails*> bookings;
    std::ifstream inFile("bookings.csv");
    std::string line;

    if (!inFile.is_open()) {
        std::cerr << "Error opening file for reading booking data." << std::endl;
        return bookings;
    }

    while (std::getline(inFile, line)) {
        std::stringstream ss(line);
        std::string name, contact, durationStr;
        std::string type, brand, model, number, status, priceStr;
        std::string payType, payID, payStatus, paidAmount;
        int duration = 0, price = 0;

        try {
            std::getline(ss, name, ',');
            std::getline(ss, contact, ',');
            std::getline(ss, durationStr, ',');
            duration = std::stoi(durationStr);

            std::getline(ss, type, ',');
            std::getline(ss, brand, ',');
            std::getline(ss, model, ',');
            std::getline(ss, number, ',');
            std::getline(ss, status, ',');
            std::getline(ss, priceStr, ',');
            price = std::stoi(priceStr);

            std::getline(ss, payType, ',');
            std::getline(ss, payID, ',');
            std::getline(ss, payStatus, ',');
            std::getline(ss, paidAmount);

            RentVehicles* vehicle = new RentVehicles(type, brand, model, number, status, price);
            PaymentMode* payment = new PaymentMode(payType, payID, payStatus, paidAmount);

            BookingDetails* booking = new BookingDetails(name, contact, duration, vehicle, payment);
            bookings.push_back(booking);
        }
        catch (const std::exception& e) {
            std::cerr << "Error parsing booking data: " << e.what() << std::endl;
        }
    }
    inFile.close();
    return bookings;
}
