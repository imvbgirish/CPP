#include "upi.h"

UPI::UPI(std::string& paymentType, std::string& paymentID, std::string& paymentStatus, std::string& paidAmount)
    :PaymentMode(paymentType, paymentID, paymentStatus, paidAmount){}

UPI::~UPI()
{

}
