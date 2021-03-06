#include <iostream>
#include <stdexcept>
#include "BasePlusCommissionEmployee.h"

BasePlusCommissionEmployee::BasePlusCommissionEmployee(
    const std::string& a_firstName,
    const std::string& a_lastName,
    const std::string& a_ssn,
    double a_sales,
    double a_rate,
    double a_salary)
    // explicity call base-class constructor
    : CommissionEmployee(a_firstName, a_lastName, a_ssn, a_sales, a_rate)
{
    setBaseSalery(a_salary);
}

void BasePlusCommissionEmployee::setBaseSalery(double a_salary)
{
    if (a_salary >= 0.0)
        m_baseSalary = a_salary;
    else
        throw std::invalid_argument("Base salery must be >= 0.0");
}

double BasePlusCommissionEmployee::getBaseSalery() const
{
    return m_baseSalary;
}

double BasePlusCommissionEmployee::earnings() const
{
    return m_baseSalary + getGrossSales() * getCommissionRate();
}

void BasePlusCommissionEmployee::print() const
{
    std::cout << "commission employee: " << getFirstName() << ' ' << getLastName()
        << "\nsocial security number: " << getSocialSecurityNumber()
        << "\ngross sales: " << getGrossSales()
        << "\ncommission rate: " << getCommissionRate()
        << "\nbase salary: " << getBaseSalery();
}
