#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    ofstream outFile("filename.txt");

    cout<<"enter account, name, balance: ";

    int account;
    string name;
    double balance;

    while(cin>>account>>name>>balance)
    {
        outFile<<account<<" "<<name<<""<<balance<<" \n ?";
    }
}
