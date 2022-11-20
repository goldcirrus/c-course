/*Question 2
(Date Class) Create a class called Date that includes three instance variables¡ªa month (type int), a day (type int) and a year (type int).
Provide a constructor that initializes the three instance variables and assumes that the values provided are correct.
Provide a set and a get method for each instance variable.
Provide a method displayDate that displays the month, day and year separated by forward slashes (/).*/


#include <iostream>   //for cout, cin
#include <string>     //enable program to use c++ string data type; when the function take a string data argument
#include <iomanip>    // for float number display format



/*define the Date Class first before the client program can use it. */
class Date
{
public:


    /*constructor*/
    Date(int day,int month,int year)
    : month{month}, day{day},year{year}
    {
         //initialize a Data object's member data by this constructor's arguments
    }

    void setMonth(int newMonth )
    {
        month = newMonth;
    }

    int getMonth()
    {
        return month;
    }

    void setDay(int newDay)
    {
        day = newDay;
    }

    int getDay()
    {
        return day;
    }

    void setYear(int newYear)
    {
        year = newYear;
    }

    int getyear()
    {
        return year;
    }

    void displayDate()
    {
        std::cout<<"\nthe date is "<<day<<"\\"<<month<<"\\"<<year<<"."<<std::endl;
    }


private:
    int month{0};
    int day{0};
    int year{0};

};  //end of class definition
