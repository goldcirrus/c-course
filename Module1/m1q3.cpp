/*(Car©\Pool Savings Calculator) Research several car©\pooling websites.
Create an application that calculates your daily driving cost,
so that you can estimate how much money could be saved by car pooling.

The application should input the following information and
display the user¡¯s cost per day of driving to work:
a) Total miles driven per day.
b) Cost per gallon of gasoline.
c) Average miles per gallon.
d) Parking fees per day.
e) Tolls per day.*/

#include <iostream>
using namespace std;

int main()
{
    double mi_pd=0;
    double c_pg=0;
    double mi_pg=0;
    double park_pd=0;
    double toll_pd=0;

    double total_c=0;

    cout<<"Please enter how many miles do you drive per day= ";
    cin>>mi_pd;

    cout<<"Please enter the cost per gallon of gasoline= ";
    cin>>c_pg;

    cout<<"please enter the average miles per gallon of your car= ";
    cin>>mi_pg;

    cout<<"please enter the parking fee you pay per day= ";
    cin>>park_pd;

    cout<<"please enter the toll fee you pay per day= ";
    cin>>toll_pd;

    total_c = mi_pd/mi_pg*c_pg + park_pd + toll_pd;

    cout<<"Your daily cost of driving is "<<total_c<<endl;

    return 0;

}
