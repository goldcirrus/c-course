#include <iostream>
#include <string>
#include <stdexcept>
#include <sstream>
#include <iomanip>

using namespace std;

class CommissionEmployee
{
public:

    CommissionEmployee(const std::string& first, const std::string& last, const std::string& ssn, double sales, double rate )
        : firstname(first), lastname(last), socialSecurityNumber(ssn)
    {
           setGrossSales(sales);
           setCommissionRate(rate);
          // setFirstName(first);
          // setLastName(last);
         //  setSocialSecurityNumber(ssn);
    }

    void setFirstName(const std::string& first)
    {
        firstname = first;
    }

    std::string getFirstName() const
    {
        return firstname;
    }

    void setLastName(const std::string& last)
    {
        lastname=last;
    }

    std::string getLastName() const
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

    void setGrossSales(double sales)
    {
        if(sales<0.0)
            {throw invalid_argument("Gross sales value must greater than 0. ");}

        grossSales=sales;
    }

    double getGrossSales() const
    {
        return grossSales;
    }

    void setCommissionRate(double rate)
    {
        if(rate<=0.0 || rate>=1.0)
            {throw invalid_argument("Commission rate value between 0 and 1, exclusive of 0 and 1. ");}

        commissionRate=rate;
    }

    double getCommissionRate() const
    {
        return commissionRate;
    }

    //calculate earnings for a object
    double earnings()  const
    {
        return getGrossSales()*getCommissionRate();
    }

    //display object's information as a string returned

    std::string print() const
    {
        std::ostringstream output;
        output<<std::fixed<<std::setprecision(2);
        output<<"Employee name: "<<getFirstName()<<" "<<getLastName()
              <<"\nSocial Security Number: "<<getSocialSecurityNumber()
              <<"\nGross Sales: "<<getGrossSales()
              <<"\nCommission Rate: "<<getCommissionRate();

        return output.str();    //return a string
    }


private:
    std::string firstname;
    std::string lastname;
    std::string socialSecurityNumber;
    double grossSales;
    double commissionRate;


};

int main()
{
   // instantiate BasePlusCommissionEmployee object
   CommissionEmployee employee( "Bob", "Lewis", "333-33-3333", 5000, .04 );

   // set floating-point output formatting

  cout<< employee.print(); // display the new employee information

   // display the employee's earnings
   cout << "\n\nEmployee's earnings: $" << employee.earnings() << endl;
} // end main

