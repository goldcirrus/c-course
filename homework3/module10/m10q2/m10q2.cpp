// Creating a randomly accessed file.

#include <iostream>
#include <iomanip>
#include <fstream>
#include <cstdlib>

#include "ClientData.cpp" // ClientData class definition

using namespace std;

//function prototypes
void createRandomFile();
void readRandomFileSequentially();
void readRandomFileAtOneRecord();
     //function to display a single record in Memory(an object's data member variables in Memory)
void outputLine( ostream&, const ClientData & );
char makeAction();

int main()
{          //menuChoice is a,b,c or d(quit) only
    char menuChoice = makeAction();

    while(menuChoice != 'd')
    {
        switch(menuChoice)
       {
            case 'a':
                createRandomFile();
                break;
            case 'b':
                readRandomFileSequentially();
                break;
            case 'c':
                readRandomFileAtOneRecord();
                break;
       }

       menuChoice = makeAction();
    }



    cout<<"\nYou choose to quit. Bye....\n";

    return 0;


} // end main


void createRandomFile()
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
       cout<<endl;

       blankClient[i].setFirstName(fname);
       blankClient[i].setLastName(lname);
       blankClient[i].setAccountNumber(account);
       blankClient[i].setBalance(balance);

   }


   // output 10 records(array elements/objects)  to file
   for ( int i = 0; i < 10; ++i )
      outCredit.write( reinterpret_cast< const char * >( &blankClient[i] ),
         sizeof( ClientData ) );
}


//function to read one specific record of a Random access File by let user specify a record number
void readRandomFileAtOneRecord()
{
     /*open file to input(read) to Memory from file*/
    ifstream inCredit( "credit.dat", ios::in | ios::binary );

    // exit program if ifstream cannot open file
    if ( !inCredit )
   {
      cerr << "File could not be opened. You must enter a to create a file first!" << endl;
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

//function to read all records of a random access files sequentially
void readRandomFileSequentially()
{
      /*open random access file "credit.dat for read/input records to in Memory object's data member variables*/
   ifstream inCredit( "credit.dat", ios::in | ios::binary );

   // exit program if ifstream cannot open file
   if ( !inCredit )
   {
      cerr << "File could not be opened. You must enter 'a' to create a file first!" << endl;
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
}


// function to display a single record
void outputLine( ostream &output, const ClientData &record )
{
   output << left << setw( 10 ) << record.getAccountNumber()
      << setw( 16 ) << record.getLastName()
      << setw( 11 ) << record.getFirstName()
      << setw( 10 ) << setprecision( 2 ) << right << fixed
      << showpoint << record.getBalance() << endl;
} // end function outputLine


//make menu choices
char makeAction()
{
    //create a menu selected by characters:a,b,c,d
    char action;


    cout<<"\nMake an entry: \n enter 'a' to create a random file.\n";
    cout<<" enter 'b' to read a random file's all records sequentially. \n";
    cout<<" enter 'c' to read a random file's one record at a specific position. \n";
    cout<<" enter 'd' to quit \n";
    cout<<"If you have not created a file yet, please enter 'a' first: ";

    cin>>action;

    //validate keyboard enter is in range -- a:97, b:98, c:99
    while(action <'a' || action >'d')
    {
        cout<<"enter a,b,c or d: \n";
        cin>>action;
    }

    return action;
}
