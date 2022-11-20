/*This is Class file for derived Class: BasePlusCommissionEmployee.h
  its direct base class is CommissionEmployee
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

    //virtual destructor
    virtual ~BasePlusCommissionEmployee()=default;

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

    /*override pure virtual function in abstract base class: Employee
      calculate the earning for this derived class object */
    virtual double earnings() const
    {
        return getBaseSalary()+ CommissionEmployee::earnings();
    }

    //overridde virtual function in base class: print(), import base class's function print()
    virtual std::string print() const
    {
        std::ostringstream output;
        output<<std::fixed<<std::setprecision(2);
        output<<CommissionEmployee::print()         //use Base class's function
              <<"\nBase Salary: "<<getBaseSalary();


        return output.str();
    }


private:
    double baseSalary;

};



#endif // BASEPLUSCOMMISSION_H
