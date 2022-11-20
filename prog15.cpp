#include<iostream>
#include<conio.h>
using std::cout; // program uses cout
using std::cin; // program uses cin
using std::endl; // program uses endl
using std::string;
// This program Illustrates inline functions, default parameters and function overloading

void printLine(char a='*', int n=80)
{
     int x;
     cout << endl;
     for (x=0; x<n; x++) cout << a; cout <<endl;
}

int sum(int a, int b, int c, int d)
{
    cout << "Sum of four integers " << a << " " << b<< " " << c << " " <<d << "  is : " ;
    return (a+b+c+d);
}

float average(double a, double b, double c, double d)
{
      float avg;
cout << "Average of four float numbers   " << a << " " << b<< " " << c << " " <<d << "  is : " ;
    avg =(a+b+c+d)/4;
    return avg;
}

float average(int a, int b, int c, int d)
{
      float avg;
cout << "Average of four int numbers   " << a << " " << b<< " " << c << " " <<d << "  is : " ;
    avg =(a+b+c+d)/4;
    return avg;
}

int main()
{

//declare variable type float and char
//Input the choice.
cout <<endl<<endl;
printLine();
cout << sum(12, 34, 56, 45) << endl;
//@ call printLine() to print a line of 25 stars 
cout << average (12, 34, 56, 45) << endl ;
//@ call printLine() to print a line of 25 stars 
//@ call average function with 4 double numbers

//@ call default printLine function

system("pause");

}




