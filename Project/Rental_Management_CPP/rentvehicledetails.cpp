#include "rentvehicledetails.h"



RentVehicleDetails::RentVehicleDetails(std::string vehicleType, std::string brand, std::string model,
                                       std::string vehicleNumber, std::string status, int rentPrice)
    :m_vehicleType{vehicleType}, m_brand{brand}, m_model{model}, m_vehicleNumber{vehicleNumber}, m_status{status}, m_rentPrice{rentPrice}
{

}

RentVehicleDetails::~RentVehicleDetails()
{

}

std::string RentVehicleDetails::vehicleType() const
{
    return m_vehicleType;
}

void RentVehicleDetails::setVehicleType(const std::string &newVehicleType)
{
    m_vehicleType = newVehicleType;
}

std::string RentVehicleDetails::brand() const
{
    return m_brand;
}

void RentVehicleDetails::setBrand(const std::string &newBrand)
{
    m_brand = newBrand;
}

std::string RentVehicleDetails::model() const
{
    return m_model;
}

void RentVehicleDetails::setModel(const std::string &newModel)
{
    m_model = newModel;
}

std::string RentVehicleDetails::vehicleNumber() const
{
    return m_vehicleNumber;
}

void RentVehicleDetails::setVehicleNumber(const std::string &newVehicleNumber)
{
    m_vehicleNumber = newVehicleNumber;
}

std::string RentVehicleDetails::status() const
{
    return m_status;
}

void RentVehicleDetails::setStatus(const std::string &newStatus)
{
    m_status = newStatus;
}

int RentVehicleDetails::rentPrice() const
{
    return m_rentPrice;
}

void RentVehicleDetails::setRentPrice(int newRentPrice)
{
    m_rentPrice = newRentPrice;
}
