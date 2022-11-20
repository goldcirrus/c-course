/*This is Class file for Class: HourlyEmployee.h
.h file can not use namespace automatically */

#ifndef HOURLY_H
#define HOURLY_H

#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>

#include "Employee.h"

class HourlyEmployee :public Employee
{
public:
          //construcor: const lock argument --> get() functions must be const
          //& --> pass arguement by reference
    HourlyEmployee(const std::string& first, const std::string& last, const std::string& ssn, double hour, double payRate)
        : Employee(first,last,ssn)
    {
           setWorkHours(hour);
           setPayRate(payRate);
    }

       //virtual destructor p546
    virtual ~HourlyEmployee() = default;

    void setWorkHours(double hour)
    {
        workHours = hour;
    }

    double getWorkHours() const
    {
        return workHours;
    }

    void setPayRate(double rate)
    {
        payRate=rate;
    }

    double getPayRate() const
    {
        return payRate;
    }



     /*override pure virtual function in abstract base class: Employee
      calculate the earning for this derived class object */
    virtual double earnings() const
    {
        //get current month from system time
        time_t now = time(0);
        tm *ltm=localtime(&now);

        int mon=1+ltm->tm_mon;

        if(Employee::getBirthMonth() == mon)
        {
            std::cout<<"\nBonus $100 added for a happy birthday! \n";

            if(getWorkHours()>40)
               return 40*getPayRate()+(getWorkHours()-40)*1.5*getPayRate() +100;
            else
               return getWorkHours()*getPayRate() +100;
        }
        else
        {
            if(getWorkHours()>40)
                return 40*getPayRate()+(getWorkHours()-40)*1.5*getPayRate();
            else
                return getWorkHours()*getPayRate();
        }

    }

    //virtual function in Base Class: display object's information as a string returned
    virtual std::string print() const
    {
        std::ostringstream output;
        output<<std::fixed<<std::setprecision(2);
        output<<Employee::print()
              <<"\nHourly pay rate: $"<<getPayRate()
              <<"\nWorked Hours this Week: "<<getWorkHours();

        return output.str();    //return a string
    }

private:
    double workHours;
    double payRate;

};




#endif // HOURLY_H
