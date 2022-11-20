#include <iostream>
#include <sstream>
using std::cerr;
using std::cin;
using std::cout;
using std::endl;
using std::ios;

#include <fstream>
using namespace std;

#include <cstdlib>


int main()
{
   ifstream outClientFile( "clients.dat", ios::in );

   if ( !outClientFile )
   {
      cerr << "File could not be opened" << endl;
      exit( 1 );
   }

string line;
cout << "ID   Name   Balance\n";
while (getline(outClientFile, line))
{


    cout << line << endl;
}
outClientFile.close();

   return 0;
}
