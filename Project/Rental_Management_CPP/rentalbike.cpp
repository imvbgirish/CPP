#include "rentalbike.h"

RentalBike::RentalBike(std::string &vehicleType, std::string &brand, std::string &model, std::string &vehicleNumber, std::string &status, int rentPrice)
    :RentVehicles(vehicleType, brand, model, vehicleNumber, status, rentPrice){}

RentalBike::~RentalBike()
{

}
