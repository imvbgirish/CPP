#ifndef UPI_H
#define UPI_H

#include "paymentMode.h"

class UPI : public PaymentMode
{
public:
    UPI() = default;
    UPI(std::string& paymentType, std::string& paymentID, std::string& paymentStatus, std::string& paidAmount);
    ~UPI();
};

#endif // UPI_H
