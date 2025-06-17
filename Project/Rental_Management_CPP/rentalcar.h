#ifndef RENTALCAR_H
#define RENTALCAR_H

#include "rentvehicles.h"

class RentalCar : public RentVehicles
{
public:
    RentalCar();
    RentalCar(std::string& vehicleType, std::string& brand, std::string& model, std::string& vehicleNumber, std::string& status, int rentPrice);
    ~RentalCar();
};

#endif // RENTALCAR_H
