#include "HourlyEmployee.h"

HourlyEmployee::HourlyEmployee(const std::string& name, int id, 
                                double payPerHour, double workedHours)
{
    this->name = name;
    this->id = id;

    this->payPerHour = payPerHour;
    this->workedHours = workedHours;
}

HourlyEmployee:: double calculatePay() const override
{
    return workedHours*payPerHour;
}

