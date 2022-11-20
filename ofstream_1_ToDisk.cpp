/* data in memory(first get data value from keyboard) --output--> to disk */
#include <iostream>
#include <cstdlib>
#include <fstream>

using std::cerr;
using std::cin;
using std::cout;
using std::endl;
using std::ios;
using std::ofstream;
using std::exit;

int main()
{
   ofstream outClientFile( "clients.dat", ios::out );   //variables(data) in memeory --output-> to file:"clients.dat"

   if ( !outClientFile )
   {
      cerr << "File could not be opened" << endl;
      exit( 1 );
   }

   int    account = 12;
   char   name[80] = "This Is A Test";
   double balance = 123.123;

char ans = 'Y';

while (ans == 'Y' || ans =='y')
{
    cout << "Enter name ";
    cin >> name;

    cout << "Enter account no: ";
    cin >> account;

    cout << "Enter Balance : ";
    cin >> balance;

          /* file --output-- from (data) variable's value in Memory, output to disk  */
        outClientFile << account << " " << name << " " << balance << endl;

    cout << "Press 'y' to continue...";
    cin >> ans;
}

    cout<<"enter: name, account#, balance: "<<endl;
    while(cin>>name>>account>>balance)
    {
        /* file --output-- from (data) variable's value in Memory, output to disk  */
        outClientFile << account << " " << name << " " << balance << endl;
        cout<<"more?"<<endl;
    }

    outClientFile.close();  //close file

   return 0;
}
