#ifndef RENTALCAR_H
#define RENTALCAR_H

#include "rentvehicledetails.h"

class RentalCar : public RentVehicleDetails
{
public:
    RentalCar(std::string vehicleType, std::string brand, std::string model, std::string vehicleNumber, std::string status, int rentPrice);
    ~RentalCar();
};

#endif // RENTALCAR_H
