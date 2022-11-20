/*Question 2
(Date Class) Create a class called Date that includes three instance variables¡ªa month (type int), a day (type int) and a year (type int).
Provide a constructor that initializes the three instance variables and assumes that the values provided are correct.
Provide a set and a get method for each instance variable.
Provide a method displayDate that displays the month, day and year separated by forward slashes (/).
Write a test application named DateTest that demonstrates class Date¡¯s capabilities. */

/*this cpp file has both class definition and client program in one cpp file
please see Date.h and DateTest.cpp in the same folder for a separated implementation. */

#include <iostream>   //for cout, cin
#include <string>     //enable program to use c++ string data type; when the function take a string data argument
#include <iomanip>    // for float number display format

using namespace std;

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
        cout<<"\nthe date is "<<day<<"\\"<<month<<"\\"<<year<<"."<<endl;
    }


private:
    int month{0};
    int day{0};
    int year{0};

};  //end of class definition


/*start client codes*/
int main()
{
    Date date_x(2,3,1999);

    date_x.displayDate();
    cout<<"the day is "<<date_x.getDay()<<endl;
    cout<<"the month is "<<date_x.getMonth()<<endl;
    cout<<"the year is "<<date_x.getyear()<<endl;

    date_x.setDay(6);
    date_x.setMonth(11);
    date_x.setYear(2000);

    date_x.displayDate();
    cout<<"the new day is "<<date_x.getDay()<<endl;
    cout<<"the new month is "<<date_x.getMonth()<<endl;
    cout<<"the new year is "<<date_x.getyear()<<endl;


}
