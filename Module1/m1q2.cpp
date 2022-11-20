/*Write a C++ program that asks the user to enter two integers. Obtain the numbers
from the user, and then print the larger number followed by the words ¡°is larger.¡± If
the numbers are equal, print the message ¡°The numbers are equal¡±.*/

#include <iostream>
using namespace std;

int main()
{
    int num1=0;
    int num2=0;

    cout << "Enter a integer: "; // prompt user for data
    cin >> num1;
    cout << "Enter another integer: "; // prompt user for data
    cin>> num2;

    if(num1>num2)
        cout<<num1<<" is larger"<<endl;
    else if(num2>num1)
        cout<<num2<<" is larger"<<endl;
    else
        cout<<"The numbers is equal"<<endl;

    return 0;
}
