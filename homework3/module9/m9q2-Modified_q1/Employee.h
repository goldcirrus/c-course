/*This is Class file for Abstract Base Class: Employee.h
.h file can not use namespace automatically */

#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>

#include "Date.h"

class Employee
{
public:
          //construcor: const lock argument --> get() functions must be const
          //& --> pass arguement by reference
    Employee(const std::string& first, const std::string& last, const std::string& ssn)
        : firstname(first), lastname(last), socialSecurityNumber(ssn)
    {
          std::cout<<"Please enter employee's birthday for "
               <<getFirstName()<<" "<<getLastName()<<": \n";

          birthDay.setDate();

    }

    //virtual destructor p546
    virtual ~Employee() = default;

    void setFirstName(const std::string& first)
    {
        firstname = first;
    }

    std::string getFirstName()  const
    {
        return firstname;
    }

    void setLastName(const std::string& last)
    {
        lastname=last;
    }

    std::string getLastName()  const
    {
        return lastname;
    }

    void setSocialSecurityNumber(const std::string& ssn)
    {
        socialSecurityNumber=ssn;
    }

    std::string getSocialSecurityNumber() const
    {
        return socialSecurityNumber;
    }

    int getBirthMonth() const
    {
        birthDay.getMonth();
    }

     /*pure virtual function makes Employee an abstract base class
       no implementation requried in pure virtual function in the Abstract Class
       calculate the earning of each Employee's derived class object */
    virtual double earnings() const =0;

    //virtual function in Base Class: display object's information as a string returned
    virtual std::string print() const
    {
        std::ostringstream output;
        output<<std::fixed<<std::setprecision(2);
        output<<"Employee name: "<<getFirstName()<<" "<<getLastName()
              <<"\nSocial Security Number: "<<getSocialSecurityNumber();

        return output.str();    //return a string
    }




private:
    std::string firstname;
    std::string lastname;
    std::string socialSecurityNumber;
           Date birthDay;

};




#endif // EMPLOYEE_H
