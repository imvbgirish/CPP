#ifndef RENTALBIKE_H
#define RENTALBIKE_H

#include "rentvehicledetails.h"

class RentalBike : public RentVehicleDetails
{
public:
    RentalBike(std::string vehicleType, std::string brand, std::string model, std::string vehicleNumber, std::string status, int rentPrice);
    ~RentalBike();
};

#endif // RENTALBIKE_H
