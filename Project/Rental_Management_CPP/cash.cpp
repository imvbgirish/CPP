#include "cash.h"

Cash::Cash(std::string &paymentType, std::string &paymentID, std::string &paymentStatus, std::string &paidAmount)
:PaymentMode(paymentType, paymentID, paymentStatus, paidAmount){}

Cash::~Cash()
{

}

