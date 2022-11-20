/*Open prog12.cpp and convert that to run through functions for calculating the areas
of circle, triangle, rectangle and square.
//@ convert the program using a switch statement
//@ add one more option to calculate the area of rhombus
*/

#include<iostream>
#include<conio.h>
#include<cstdlib>

using std::cout; // program uses cout
using std::cin; // program uses cin
using std::endl; // program uses endl

void areaCircle();
void areaSquare();
void areaRectangle();
void areaTriangle();
void areaRhombus();

double area;  //area is global area, it is declared outside class and functions.

int main()
{
    char runAgain;  //sentinel value to keep do-while loop running or stop

    do
    {
        char shape;


      /*prompt to choose a shape*/
        cout<<"Please choose the shape: "<<endl;
        cout<<"Enter c for circle"<<endl;
        cout<<"Enter s for square"<<endl;
        cout<<"Enter r for rectangle"<<endl;
        cout<<"Enter t for triangle"<<endl;
        cout<<"Enter h for Rhombus"<<endl;

      /*input the shape choice*/
        cin>>shape;

        switch(shape)
    {
        case 'c':
            areaCircle();
            break;

        case 's':
            areaSquare();
            break;

        case 'r':
            areaRectangle();
            break;

        case 't':
            areaTriangle();
            break;

        case 'h':
            areaRhombus();
            break;

        default:
            cout<<"you don't choose a valid shape"<<endl;
    }

        cout <<"Enter x to exit, any other key to run again: " << endl;
        cin>>runAgain;

    }while(runAgain != 'x');



}




/*user function definition*/
void areaCircle()
{
    double r;

    cout<<"You choose circle, Please enter radius: ";
    cin>>r;
    area=3.14*r*r;

    cout<<"This circle's area is "<<area<<endl;
}

void areaSquare()
{
    double side;
    cout<<"You choose square, please enter the side: ";
    cin>>side;
    area=side*side;

    cout<<"This square's area is "<<area<<endl;
}

void areaRectangle()
{
    double length;
    double width;
    cout<<"You choose rectangle, please enter the length: ";
    cin>>length;
    cout<<"Enter the width: ";
    cin>>width;
    area=length*width;

    cout<<"This rectangle's area is "<<area<<endl;
}

void areaTriangle()
{
    double base;
    double height;
    cout<<"You choose triangle, please enter the base: ";
    cin>>base;
    cout<<"Enter the height: ";
    cin>>height;
    area=0.5*base*height;

    cout<<"This triangle's area is "<<area<<endl;
}

void areaRhombus()
{
    double base;
    double height;
    cout<<"You choose rhombus, please enter the base: ";
    cin>>base;
    cout<<"Enter the height: ";
    cin>>height;
    area=base*height;

    cout<<"This rhombus's area is "<<area<<endl;
}
