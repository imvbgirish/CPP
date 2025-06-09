#ifndef BOOKINGDETAILS_H
#define BOOKINGDETAILS_H

#include <string>
class BookingDetails
{
public:
    BookingDetails();
    BookingDetails(std::string m_name, std::string m_contactNumber, int m_rentDuration);
    ~BookingDetails();

private:
    std::string m_name;
    std::string m_contactNumber;
    int m_rentDuration;
};

#endif // BOOKINGDETAILS_H
