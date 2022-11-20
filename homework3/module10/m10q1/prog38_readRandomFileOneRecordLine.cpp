//retrave a specific record in random access file "credit.dat" at location: r

#include <iostream>
#include <iomanip>
#include <fstream>
#include <cstdlib> // exit function prototype

#include "ClientData.cpp" // ClientData class definition
using namespace std;

// prototype function to display a record line
void outputLine( ostream&, const ClientData & );

int main()
{
    /*open file to input(read) to Memory from file*/
    ifstream inCredit( "credit.dat", ios::in | ios::binary );

    // exit program if ifstream cannot open file
    if ( !inCredit )
   {
      cerr << "File could not be opened." << endl;
      exit( EXIT_FAILURE );
   } // end if

      // declare the record as ClientDate type object
    ClientData client;

      //ask user enter which record number want to be read from file
    int r;
    cout << "Enter which record number you want to read from the file(1-10): ";
    cin >> r;

    //validate r is between 1 and 10
    while(r<1 || r>10)
    {
        cout << "Enter which record number you want to read from the file(1-10): ";
        cin >> r;
    }

    //move file-position pointer to 'r' decided postion
    inCredit.seekg (sizeof(ClientData)*(r-1), ios::cur);

    // read record from file at file-position pointer location decided by 'r'
    inCredit.read( reinterpret_cast< char * >( &client ),sizeof( ClientData ) );

     // output column heads
    cout << left << setw( 10 ) << "Account" << setw( 16 )
      << "Last Name" << setw( 11 ) << "First Name" << left
      << setw( 10 ) << right << "Balance" << endl;

    // display the record in the Memory(hold by an object's data member variables) read/input from file.
    outputLine( cout, client );

}




// display single record
void outputLine( ostream &output, const ClientData &record )
{
   output << left << setw( 10 ) << record.getAccountNumber()
      << setw( 16 ) << record.getLastName()
      << setw( 11 ) << record.getFirstName()
      << setw( 10 ) << setprecision( 2 ) << right << fixed
      << showpoint << record.getBalance() << endl;
} // end function outputLine
