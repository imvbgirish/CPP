#ifndef RENTVEHICLEDETAILS_H
#define RENTVEHICLEDETAILS_H

#include <string>
class RentVehicleDetails
{
public:
    RentVehicleDetails(std::string vehicleType, std::string brand,
                       std::string model, std::string vehicleNumber,
                       std::string status, int rentPrice);
    ~RentVehicleDetails();

    std::string vehicleType() const;
    void setVehicleType(const std::string &newVehicleType);

    std::string brand() const;
    void setBrand(const std::string &newBrand);

    std::string model() const;
    void setModel(const std::string &newModel);

    std::string vehicleNumber() const;
    void setVehicleNumber(const std::string &newVehicleNumber);

    std::string status() const;
    void setStatus(const std::string &newStatus);

    int rentPrice() const;
    void setRentPrice(int newRentPrice);

private:
    std::string m_vehicleType;
    std::string m_brand;
    std::string m_model;
    std::string m_vehicleNumber;
    std::string m_status;
    int m_rentPrice;
};

#endif // RENTVEHICLEDETAILS_H
