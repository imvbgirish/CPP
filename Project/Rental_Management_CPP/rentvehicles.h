#ifndef RENTVEHICLES_H
#define RENTVEHICLES_H

#include <string>
class RentVehicles
{
public:
    RentVehicles();
    RentVehicles(std::string& vehicleType, std::string& brand,
                       std::string& model, std::string& vehicleNumber,
                       std::string& status, int rentPrice);
    ~RentVehicles();

    std::string getVehicleType() const;
    void setVehicleType(const std::string &newVehicleType);

    std::string getBrand() const;
    void setBrand(const std::string &newBrand);

    std::string getModel() const;
    void setModel(const std::string &newModel);

    std::string getVehicleNumber() const;
    void setVehicleNumber(const std::string &newVehicleNumber);

    std::string getStatus() const;
    void setStatus(const std::string &newStatus);

    int getRentPrice() const;
    void setRentPrice(int newRentPrice);

private:
    std::string m_vehicleType;
    std::string m_brand;
    std::string m_model;
    std::string m_vehicleNumber;
    std::string m_status;
    int m_rentPrice;
};

#endif // RENTVEHICLES_H
