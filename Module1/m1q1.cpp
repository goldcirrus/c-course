/*Write a C++ program that asks the user to enter radius of the circle.
The program must print circle¡¯s diameter, area and circumference.
Use the Pi value as 3.14 for all calculations. Do all calculations in the output statement.
Liang Zhong; T00224182
*/


#include <iostream>
using namespace std;

int main()
{
    double radius=0;
    double pi=3.14;
    double diameter=0;
    double area=0;
    double circumference=0;

    cout<<"please enter radius value: \n";  //prompt to enter a value for the radius
    cin>>radius;                            //user entered value is stored in variable: radius

    diameter= 2*radius;
    area=pi*radius*radius;
    circumference=2*pi*radius;

    cout<<endl<<"the diameter is "<<diameter
        <<endl<<"the area is "<<area
        <<endl<<"the circumerence is "<<circumference
        <<endl;

    cout<<endl<<"do again: all calculations in output statements. Not a good practice in my opinion!"
        <<endl<<"the diameter is "<<2*radius
        <<endl<<"the area is "<<pi*radius*radius
        <<endl<<"the circumerence is "<<2*pi*radius
        <<endl;

    return 0;

}
