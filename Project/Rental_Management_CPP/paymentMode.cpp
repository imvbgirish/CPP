#include "paymentMode.h"


PaymentMode::PaymentMode(std::string &paymentType, std::string &paymentID, std::string &paymentStatus, std::string &paidAmount)
    : m_paymentType(paymentType),
    m_paymentID(paymentID),
    m_paymentStatus(paymentStatus),
    m_paidAmount(paidAmount) {}

PaymentMode::~PaymentMode()
{

}

std::string PaymentMode::getPaymentType() const
{
    return m_paymentType;
}

void PaymentMode::setPaymentType(const std::string &newPaymentType)
{
    m_paymentType = newPaymentType;
}

std::string PaymentMode::getPaymentID() const
{
    return m_paymentID;
}

void PaymentMode::setPaymentID(const std::string &newPaymentID)
{
    m_paymentID = newPaymentID;
}

std::string PaymentMode::getPaymentStatus() const
{
    return m_paymentStatus;
}

void PaymentMode::setPaymentStatus(const std::string &newPaymentStatus)
{
    m_paymentStatus = newPaymentStatus;
}

std::string PaymentMode::getPaidAmount() const
{
    return m_paidAmount;
}

void PaymentMode::setPaidAmount(const std::string &newPaidAmount)
{
    m_paidAmount = newPaidAmount;
}
