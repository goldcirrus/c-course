/*read file in disk, input to Memory */
#include <iostream>
#include <cstdlib>
#include <sstream>
#include <fstream>

using std::cerr;
using std::cin;
using std::cout;
using std::endl;
using std::ios;

using namespace std;

int main()
{
   ifstream inClientFile( "clients.dat", ios::in );    //getline data from file --input--> to Memory's vairalbes

   if ( !inClientFile )
   {
      cerr << "File could not be opened" << endl;
      exit( 1 );
   }

   string lineX;
   cout << "account#   Name   Balance\n";

   while ( getline(inClientFile, lineX) )   //get each line's characters from file, assigned to vairable 'line'
   {                                       //p585  different getline(buffer, size)
        cout << lineX << endl;
   }


   inClientFile.close();   //close file after getline

   return 0;
}

/* (1) istream& getline (istream& is, string& str, char delim);
    (2) istream& getline (istream& is, string& str);
     //default delim: newline character. Get line from stream into string;
       Extracts characters from is and stores them into str
    until the delimitation character delim is found (or the newline character, '\n', for (2)).

    getline(cin, stringVairable);              //input from keyboard to a string vairable in Memory
    getline(ifstreamObj, stringVariable);      //input from file to a string vairable in Memory
 */
