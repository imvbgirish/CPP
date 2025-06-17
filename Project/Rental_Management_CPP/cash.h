#ifndef CASH_H
#define CASH_H

#include "paymentMode.h"
#include <string>

class Cash : public PaymentMode
{
public:
    Cash() = default;
    Cash(std::string& paymentType, std::string& paymentID, std::string& paymentStatus, std::string& paidAmount);
    ~Cash();
};

#endif // CASH_H
