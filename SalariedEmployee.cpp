#include "SalariedEmployee.h"

SalariedEmployee::SalariedEmployee(const std::string& name, int id, double yearlyPayment)
{
    this->name = name;
    this->id = id;

    this->yearlyPayment = yearlyPayment;
}


SalariedEmployee::double calculatePay() const override
{
    return yearlyPayment/26
}