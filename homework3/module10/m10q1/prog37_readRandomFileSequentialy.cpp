//display records of random access file "credit.dat"  sequentialy

#include <iostream>
#include <iomanip>
#include <fstream>
#include <cstdlib> // exit function prototype

#include "ClientData.cpp" // ClientData class definition

using namespace std;

void outputLine( ostream&, const ClientData & ); // prototype

int main()
{
    /*open random access file "credit.dat for read/input records to in Memory object's data member variables*/
   ifstream inCredit( "credit.dat", ios::in | ios::binary );

   // exit program if ifstream cannot open file
   if ( !inCredit )
   {
      cerr << "File could not be opened." << endl;
      exit( EXIT_FAILURE );
   } // end if

   // output column heads
   cout << left << setw( 10 ) << "Account" << setw( 16 )
      << "Last Name" << setw( 11 ) << "First Name" << left
      << setw( 10 ) << right << "Balance" << endl;

   ClientData client; // declare the record as ClientDate type object

   /*read first record from file:
P635 the istream function read inputs a specific number of bytes(sizeof) from the current position
in the stream into an object in Memory. */
   inCredit.read( reinterpret_cast< char * >( &client ), sizeof( ClientData ) );

   // read all records from file; fle-position pointer automatically moves to next record one by one
   while ( inCredit && !inCredit.eof() )
   {
      // display record
      if ( client.getAccountNumber() != 0 )
         outputLine( cout, client );

      // read the next record from file; file-position pointer automatically moves to the next record in file
      inCredit.read( reinterpret_cast< char * >( &client ),
         sizeof( ClientData ) );
   } // end while
} // end main


// function to display a single record
void outputLine( ostream &output, const ClientData &record )
{
   output << left << setw( 10 ) << record.getAccountNumber()
      << setw( 16 ) << record.getLastName()
      << setw( 11 ) << record.getFirstName()
      << setw( 10 ) << setprecision( 2 ) << right << fixed
      << showpoint << record.getBalance() << endl;
} // end function outputLine
