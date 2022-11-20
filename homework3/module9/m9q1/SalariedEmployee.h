/*This is Class SalariedEmployee.h
.h file can not use namespace automatically */

#ifndef SALARIED_H
#define SALARIED_H

#include <iostream>
#include <string>
#include <stdexcept>
#include <sstream>
#include <iomanip>

#include "Employee.h"  //Abstract Base Class .h file

class SalariedEmployee :public Employee   //public inherit Employee Class
{
public:
          //construcor: const lock argument --> get() functions must be const
          //& --> pass arguement by reference
    SalariedEmployee(const std::string& first, const std::string& last, const std::string& ssn, double salary)
        : Employee(first,last,ssn)    //explicitly call base class's constructor p512
    {
           setWeeklySalary(salary);
    }

    //virtual destructor p546
    virtual ~SalariedEmployee() = default;

    void setWeeklySalary(double salary)
    {
        if(salary<0.0)
            throw std::invalid_argument("Weekly salary must >=0.0");

        weeklySalary=salary;
    }

    double getWeeklySalary() const
    {
        return weeklySalary;
    }


    /*override pure virtual function in abstract base class: Employee
      calculate the earning for this derived class object */
    virtual double earnings() const override
    {
        return weeklySalary;
    }


    //override virtual functionn in Base class: display SalariedEmployee object's information as a string returned
    virtual std::string print() const
    {
        std::ostringstream output;
        output<<std::fixed<<std::setprecision(2);
        output<<Employee::print()                  //reuse abstract base class's function
              <<"\nweekly Salary: $"<<getWeeklySalary();

        return output.str();    //return a string
    }




private:
    double weeklySalary;

};




#endif // SALARIED_H
