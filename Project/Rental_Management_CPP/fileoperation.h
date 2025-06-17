#ifndef FILEOPERATION_H
#define FILEOPERATION_H

#include "Person.h"
#include "bookingdetails.h"
#include "rentvehicles.h"
#include <list>

class FileOperation
{
public:
    FileOperation();
    ~FileOperation();

    void writeVehicleData(std::list<RentVehicles *> vehicle);
    std::list<RentVehicles*> readVehicleData();

    void writePersonData(std::list<Person*> person);
    std::list<Person*> readPersonData();

    void writeBookingDetails(std::list<BookingDetails*> bookings);
    std::list<BookingDetails*> readBookingDetails();
};

#endif // FILEOPERATION_H
