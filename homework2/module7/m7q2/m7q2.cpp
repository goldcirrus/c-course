#include <ctime>
#include <iostream>
#include <cstdlib>

#include "Date.h"

using namespace std;

Date getCurrentDate();

int main()
{
     cout<<"Enter your birth day: "<<endl;
     Date birthDay = Date();

     cout<<"Your entered birth day is ";   //display birthDay
     birthDay.displayDate();

     Date toDay = getCurrentDate();

     cout<<"The current date is ";   //display today
     toDay.displayDate();

     Date age = toDay - birthDay;  //calculate difference between tow Date objects
     age.displayAge();              //display age
}

/*function definition */
Date getCurrentDate()
{
   time_t now = time(0);
   tm *ltm = localtime(&now);

   int year = 1900+ltm->tm_year;  //current year#
   int month = 1+ltm->tm_mon;   //current month#
   int day = ltm->tm_mday;     //current day#

   Date today = Date(day,month,year);

   return today;
}
