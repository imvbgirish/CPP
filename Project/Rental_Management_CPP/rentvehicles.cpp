#include "rentvehicles.h"



RentVehicles::RentVehicles()
{

}

RentVehicles::RentVehicles(std::string &vehicleType, std::string &brand, std::string &model,
                           std::string &vehicleNumber, std::string &status, int rentPrice)
    :m_vehicleType{vehicleType}, m_brand{brand}, m_model{model}, m_vehicleNumber{vehicleNumber}, m_status{status}, m_rentPrice{rentPrice}
{

}

RentVehicles::~RentVehicles()
{

}

std::string RentVehicles::getVehicleType() const
{
    return m_vehicleType;
}

void RentVehicles::setVehicleType(const std::string &newVehicleType)
{
    m_vehicleType = newVehicleType;
}

std::string RentVehicles::getBrand() const
{
    return m_brand;
}

void RentVehicles::setBrand(const std::string &newBrand)
{
    m_brand = newBrand;
}

std::string RentVehicles::getModel() const
{
    return m_model;
}

void RentVehicles::setModel(const std::string &newModel)
{
    m_model = newModel;
}

std::string RentVehicles::getVehicleNumber() const
{
    return m_vehicleNumber;
}

void RentVehicles::setVehicleNumber(const std::string &newVehicleNumber)
{
    m_vehicleNumber = newVehicleNumber;
}

std::string RentVehicles::getStatus() const
{
    return m_status;
}

void RentVehicles::setStatus(const std::string &newStatus)
{
    m_status = newStatus;
}

int RentVehicles::getRentPrice() const
{
    return m_rentPrice;
}

void RentVehicles::setRentPrice(int newRentPrice)
{
    m_rentPrice = newRentPrice;
}
