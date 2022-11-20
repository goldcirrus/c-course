// Creating a randomly accessed file.

#include <iostream>
#include <fstream>
#include <cstdlib>

#include "ClientData.cpp" // ClientData class definition

using namespace std;

int main()
{
    /*open file let variable values in Memory -output to-> file
      in binary mode required for fixed-lenght records. p633*/
   ofstream outCredit( "credit.dat", ios::out | ios::binary );

   // exit program if ofstream could not open file
   if ( !outCredit )
   {
      cerr << "File could not be opened." << endl;
      exit( EXIT_FAILURE );
   } // end if

   //the variables hold values in Memory (from keyboard to memory)
   int account;
   char lname[ 15 ];
   char fname[ 10 ];
   double balance;

   //declare an array to hold 10 ClientData type objects/elements
   ClientData blankClient[10];

   //enter values for ClientData object's data members(stored in Memory) from keyboard
   for ( int i = 0; i < 10; ++i )
   {
       cout << "enter first name : ";
       cin >> fname;
       cout << "enter last name : ";
       cin >> lname;
       cout << "enter account number : ";
       cin >> account;
       cout << "enter balance : ";
       cin >> balance;

       blankClient[i].setFirstName(fname);
       blankClient[i].setLastName(lname);
       blankClient[i].setAccountNumber(account);
       blankClient[i].setBalance(balance);

   }
          // constructor zeros out each data member

   // output 10 records(array elements/objects)  to file
   for ( int i = 0; i < 10; ++i )
      outCredit.write( reinterpret_cast< const char * >( &blankClient[i] ),
         sizeof( ClientData ) );
} // end main
