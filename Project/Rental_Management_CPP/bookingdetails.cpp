#include "bookingdetails.h"

BookingDetails::BookingDetails() {}

BookingDetails::BookingDetails(std::string m_name, std::string m_contactNumber, int m_rentDuration)
    : m_name(m_name),
    m_contactNumber(m_contactNumber),
    m_rentDuration(m_rentDuration) {}

BookingDetails::~BookingDetails()
{

}
