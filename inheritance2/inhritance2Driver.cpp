// Fig. 11.9: fig11_09.cpp
// Testing class BasePlusCommissionEmployee.
#include <iostream>
#include <iomanip>

#include "BasePlusCommissionEmployee.h" // class definition

using namespace std;

int main()
{
   // instantiate BasePlusCommissionEmployee object
   BasePlusCommissionEmployee  employee( "Bob", "Lewis", "333-33-3333", 5000, .04, 300 );

   CommissionEmployee  employee1("Alice", "Smith", "750-963-5628", 100000, .04);

   // set floating-point output formatting
   cout << fixed << setprecision( 2 );

   // get commission+salary employee data
   cout << "Salary Employee information obtained by get functions: "
      << "\nFirst name is " << employee.getFirstName()
      << "\nLast name is " << employee.getLastName()
      << "\nSocial security number is "
      << employee.getSocialSecurityNumber()
      << "\nGross sales is " << employee.getGrossSales()
      << "\nCommission rate is " << employee.getCommissionRate()
      << "\nBase salary is " << employee.getBaseSalary()
      << "\nEmployee's earning is "<<employee.earnings()<< endl;

   employee.setBaseSalary( 1000 ); // change base salary

   cout<< "\nUpdated employee information output by print function: "<< endl;
   cout<< employee.print();       // display the new employee information

                                  // display the employee's earnings
   cout << "\nEmployee's new earnings: $" << employee.earnings() << endl<<endl;


                // get commission only employee data
   cout << "Commission Only Employee information obtained by get functions: "
      << "\nFirst name is " << employee1.getFirstName()
      << "\nLast name is " << employee1.getLastName()
      << "\nSocial security number is "
      << employee1.getSocialSecurityNumber()
      << "\nGross sales is " << employee1.getGrossSales()
      << "\nCommission rate is " << employee1.getCommissionRate()
      << "\nEmployee's earning is "<<employee1.earnings()<< endl;

      //change employee1's sales value
   employee1.setGrossSales(8000);

              //calling print() function in CommissionEmployee class
   cout<<"\nCalling print() function in CommissionEmployee class to dispay employee: \n"
       << employee1.print()
       << "\nEmployee's new earning is "<<employee1.earnings()<< endl;

} // end main



// TODO - Add an object of CommissionEmployee
// Run the print method of CommissionEmployee


