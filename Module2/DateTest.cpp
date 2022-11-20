
/*start client codes
Write a test application named DateTest that demonstrates class Date¡¯s capabilities.*/

#include <iostream>   //for cout, cin
#include <string>     //enable program to use c++ string data type; when the function take a string data argument
#include <iomanip>    // for float number display format

#include "Date.h"    //must include Date Class definition header file to be used by the main() function

int main()
{
    Date date_x(2,3,1999);

    date_x.displayDate();
    std::cout<<"the day is "<<date_x.getDay()<<std::endl;
    std::cout<<"the month is "<<date_x.getMonth()<<std::endl;
    std::cout<<"the year is "<<date_x.getyear()<<std::endl;

    date_x.setDay(6);
    date_x.setMonth(11);
    date_x.setYear(2000);

    date_x.displayDate();
    std::cout<<"the new day is "<<date_x.getDay()<<std::endl;
    std::cout<<"the new month is "<<date_x.getMonth()<<std::endl;
    std::cout<<"the new year is "<<date_x.getyear()<<std::endl;


}
