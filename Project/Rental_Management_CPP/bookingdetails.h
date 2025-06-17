#ifndef BOOKINGDETAILS_H
#define BOOKINGDETAILS_H

#include "paymentMode.h"
#include "rentvehicles.h"
#include <string>
class BookingDetails
{
public:
    BookingDetails();
    BookingDetails(std::string& name, std::string& contactNumber, int rentDuration,RentVehicles* rentVehicle,PaymentMode* payment);
    ~BookingDetails();

    std::string getName() const;
    void setName(const std::string &newName);

    std::string getContactNumber() const;
    void setContactNumber(const std::string &newContactNumber);

    int getRentDuration() const;
    void setRentDuration(int newRentDuration);

    RentVehicles* getRentalVehicleDetails();
    PaymentMode* getPayment();

private:
    RentVehicles* m_rentVehicle;
    PaymentMode* m_payment;

    std::string m_name;
    std::string m_contactNumber;
    int m_rentDuration;
};

#endif // BOOKINGDETAILS_H
