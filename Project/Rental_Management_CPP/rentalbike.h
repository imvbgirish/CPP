#ifndef RENTALBIKE_H
#define RENTALBIKE_H

#include "rentvehicles.h"

class RentalBike : public RentVehicles
{
public:
    RentalBike();
    RentalBike(std::string& vehicleType, std::string& brand, std::string& model, std::string& vehicleNumber, std::string& status, int rentPrice);
    ~RentalBike();
};

#endif // RENTALBIKE_H
