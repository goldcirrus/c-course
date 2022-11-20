
// Testing driver class
#include <iostream>
#include <iomanip>
#include <vector>

#include "Employee.h" // class definition
#include "SalariedEmployee.h"
#include "CommissionEmployee.h"
#include "BasePlusCommissionEmployee.h"
#include "HourlyEmployee.h"

using namespace std;

/*functon prototype*/
void invokeVirtualFunctionByPointer(const Employee* const baseClassPtr);
void invokeVirtualFunctionByReference(const Employee&);

int main()
{
   // declare and instantiate each derived/concrete class's objects
   SalariedEmployee           sEmployee = SalariedEmployee("Bob", "Smith", "555-555-5656", 8963);
   CommissionEmployee         cEmployee = CommissionEmployee("Colin", "Comm", "666-666-6666", 2000, .3);
   BasePlusCommissionEmployee bEmployee = BasePlusCommissionEmployee("BCrich","Goodman", "968-968-9999", 2000, .3, 500);
   HourlyEmployee             hEmployee = HourlyEmployee("Harly","Blue", "5656-8989-9999", 43.5, 38.3);

   //static binding: each class's object invoke its own class's implementation of virtual functions
   cout<<fixed<<setprecision(2)<<"**********************static binding example: \n\n";

   cout<<sEmployee.print()<<endl;
   cout<<"The salary Employee's earning for this week: $"<<sEmployee.earnings()<<endl<<endl;

   cout<<cEmployee.print()<<endl;
   cout<<"The Commision ONLY Employee's earning for this week: $"<<cEmployee.earnings()<<endl<<endl;

   cout<<bEmployee.print()<<endl;
   cout<<"The base plus commission Employee's earning for this week: $"<<bEmployee.earnings()<<endl<<endl;

   cout<<hEmployee.print()<<endl;    //invoke derived class's virtual function's version opeartion
   cout<<"The Hourly Employee's earning for this week: $"<<hEmployee.earnings()<<endl<<endl;



/*
   Employee* employeePtr;               //create Abstract Base Class pointer
   employeePtr=&hEmployee;             //pinter assigned derived class object's address
   cout<<employeePtr->print()<<endl;    //invoke derived class's virtual function's version opeartion
   cout<<"The Hourly Employee's earning for this week: $"<<employeePtr->earnings();
*/

   //vecor contains Abstract Base class type pointers aim to derived class objects
   vector<Employee*> employees{&sEmployee,&cEmployee,&bEmployee,&hEmployee};

   //dynamic binding
   cout<<"*************************dynamic binding example \n\n";

   cout<<"#######dynamic binding 1: invoke derived class's virtual function by Base Class type pointer to derived objects.\n";

   /*each iPointer is Base class(Employee) type pointer aims to vecor's element(derived objects)*/
   for(const Employee* iPointer: employees)
      invokeVirtualFunctionByPointer(iPointer);

   cout<<"#######dynamic binding 2: invoke derived class's virtual function by Base Class type reference to derived objects.\n ";

   /*each iPointer is Base class(Employee) type pointer aims to vector's element(derived objects) */
   for(const Employee* iPointer: employees)
      invokeVirtualFunctionByReference(*iPointer);    //argument is dereferenced pointer





} // end main


/*polymorphism invoke of derived class's virtual functions by
  an abstract base class's pointer aim to a derived class object
  a baseClassPtr aims to a derived class object can invoke the derived object's virtual functions */
void invokeVirtualFunctionByPointer(const Employee* const baseClassPtr)
{                                                   //argument is a baseClassPointer
    cout<<fixed<<setprecision(2)
        <<baseClassPtr->print()<<endl
        <<"The earning for this week is $"<<baseClassPtr->earnings()<<endl<<endl;
}

/*polymorphism invoke of derived class's virtual functions by
  an abstract base class's reference aim to a derived class object
  function pass parameter by reference*/
void invokeVirtualFunctionByReference(const Employee& baseClassRef)
{                                          //argument is a dereferenced pointer/normal object name
    cout<<fixed<<setprecision(2)
        <<baseClassRef.print()<<endl
        <<"The earning for this week is $"<<baseClassRef.earnings()<<endl<<endl;
}

