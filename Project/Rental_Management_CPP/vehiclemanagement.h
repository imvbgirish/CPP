#ifndef VEHICLEMANAGEMENT_H
#define VEHICLEMANAGEMENT_H

#include "bookingdetails.h"
#include "fileoperation.h"
#include "rentvehicles.h"
#include <list>

class VehicleManagement
{
public:
    VehicleManagement();
    ~VehicleManagement();

    void addBike();
    void addCar();

    void displayBike();
    void displayCar();

    void searchBike();
    void searchCar();

    void rentBike();
    void rentCar();

    void returnBike();
    void returnCar();

    void deleteBike();
    void deleteCar();

    void sortBikeByPrice();
    void sortCarByPrice();

    void updateBikePrice();
    void updateCarPrice();

    void addVehicle();
    void displayVehicle();
    void searchVehicle();
    void rentVehicle();
    void returnVehicle();
    void deleteVehicle();
    void sortVehicle();
    void updateRentPrice();
    void displayRentalHistory();

private:
    std::list<RentVehicles*> m_vehicles;
    std::list<BookingDetails*> m_bookings;

    FileOperation *file;
};

#endif // VEHICLEMANAGEMENT_H
