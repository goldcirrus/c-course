#include<iostream>
#include<string.h>
#include <stdlib.h>
using namespace std;

int main()
{

    char data1[10], data2[10], data3[3];

    cout << "Enter first name :";
    cin >> data1;
    cout << "Enter last name :";
    cin >> data2;

    if (strcmp(data1,data2)==0)
        cout << "You entererd same words";

    strcat(data1, data2);
    cout << "Your full name is " << data1;
// Test any other three string functions as given in the list

}
