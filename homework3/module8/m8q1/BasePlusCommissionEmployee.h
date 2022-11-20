/*This is Class file for derived Class: BasePlusCommissionEmployee.h
.h file can not use namespace automatically */

#ifndef BASEPLUSCOMMISSION_H
#define BASEPLUSCOMMISSION_H

#include <iostream>
#include <string>
#include <stdexcept>
#include <sstream>
#include <iomanip>

#include "CommissionEmployee.h"

                                 //Use base class
class BasePlusCommissionEmployee : public CommissionEmployee
{
public:
    //construcor: const lock argument --> get() functions must be const
    //& --> pass arguement by reference
    BasePlusCommissionEmployee(const std::string& first, const std::string& last, const std::string& ssn,
                               double sales, double rate, double salary)
    : CommissionEmployee(first,last,ssn,sales,rate) //explicitly call base class constructor
    {
        setBaseSalary(salary);
    }

    void setBaseSalary(double salary)
    {
        if(salary<=0.0)
            {throw std::invalid_argument("salary must greater than 0.");}

        baseSalary=salary;
    }

    double getBaseSalary() const
    {
        return baseSalary;
    }

    //rewrite base class's function earnings(), import base class's function earnings()
    double earnings() const
    {
        return getBaseSalary()+ CommissionEmployee::earnings();
    }

    //rewrite base class's function print(), import base class's function print()
    std::string print() const
    {
        std::ostringstream output;
        output<<std::fixed<<std::setprecision(2);
        output<<CommissionEmployee::print()
              <<"\nBase Salary: "<<getBaseSalary();

        return output.str();
    }


private:
    double baseSalary;

};



#endif // BASEPLUSCOMMISSION_H
