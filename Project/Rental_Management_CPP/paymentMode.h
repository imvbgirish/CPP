#ifndef PAYMENTMODE_H
#define PAYMENTMODE_H

#include <string>
class PaymentMode
{
public:
    PaymentMode(std::string paymentType, std::string paymentID, std::string paymentStatus, std::string paidAmount);
    ~PaymentMode();

    std::string paymentType() const;
    void setPaymentType(const std::string &newPaymentType);

    std::string paymentID() const;
    void setPaymentID(const std::string &newPaymentID);

    std::string paymentStatus() const;
    void setPaymentStatus(const std::string &newPaymentStatus);

    std::string paidAmount() const;
    void setPaidAmount(const std::string &newPaidAmount);

private:
    std::string m_paymentType;
    std::string m_paymentID;
    std::string m_paymentStatus;
    std::string m_paidAmount;
};

#endif // PAYMENTMODE_H
