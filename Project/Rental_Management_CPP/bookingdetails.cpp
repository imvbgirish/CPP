#include "bookingdetails.h"

BookingDetails::BookingDetails() {}

BookingDetails::BookingDetails(std::string &name, std::string &contactNumber, int rentDuration, RentVehicles *rentVehicle, PaymentMode *payment)
{
    this->m_name = name;
    this->m_contactNumber = contactNumber;
    this->m_rentDuration = rentDuration;
    this->m_rentVehicle = rentVehicle;
    this->m_payment = payment;
}



BookingDetails::~BookingDetails()
{

}

std::string BookingDetails::getName() const
{
    return m_name;
}

void BookingDetails::setName(const std::string &newName)
{
    m_name = newName;
}

std::string BookingDetails::getContactNumber() const
{
    return m_contactNumber;
}

void BookingDetails::setContactNumber(const std::string &newContactNumber)
{
    m_contactNumber = newContactNumber;
}

int BookingDetails::getRentDuration() const
{
    return m_rentDuration;
}

void BookingDetails::setRentDuration(int newRentDuration)
{
    m_rentDuration = newRentDuration;
}

RentVehicles *BookingDetails::getRentalVehicleDetails()
{
    return m_rentVehicle;
}

PaymentMode *BookingDetails::getPayment()
{
    return m_payment;
}
