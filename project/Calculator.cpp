#include <iostream>
#include <iomanip>


#include "BasicCalculator.cpp"
#include "ScienceCalculator.cpp"

using namespace std;

//function prototype
char chooseCalculator();

int main()
{
         BasicCalculator bCal = BasicCalculator();
         ScienceCalculator sCal = ScienceCalculator();


         char choose;

         double x=0.0;
         double y=0.0;
         char operation;


         while((choose=chooseCalculator())=='b' || choose =='s' )
        {
            if(choose=='b')
            {
                cout<<"enter the 1st operand:\n";
                cin>>x;
                cout<<"enter the operation sign: \n'+' for adding, '-' for subtraction, '*' for multiplication, '/' for division \n"
                    <<"'s' for square, 'r' for square root:  \n";
                cin>>operation;
                cout<<"enter the 2nd operand: (enter 0 for square or square root operation) \n";
                cin>>y;

                bCal.operate(x,operation,y);
            }

            if(choose=='s')
            {
                cout<<"enter the unary operand: \n";
                cin>>x;
                cout<<"enter the operation sign: 's' for sin, 'c' for cos, 't' for tag, 'l' for log, 'e' for base E exponential calculation: \n";
                cin>>operation;

                sCal.operate(x,operation);

            }
        }
}

//function definition to chose which calculator or quit
char chooseCalculator()
{
    char choiceTemp;

    cout<<"\nPlease enter one small case letter to choose the calculator: \n"
        <<"enter 'b' for basic calculator \n"
        <<"enter 's' for scientific calculator \n"
        <<"enter any other character to quit \n";
    cin>>choiceTemp;

    return choiceTemp;
}
