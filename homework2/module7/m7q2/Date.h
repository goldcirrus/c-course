#ifndef DATE_H
#define DATE_H



#include <iostream>



class Date
{
    /*define the operator funtion -
     const: can't change Date object to be displayed.
     must declared as friend to access d1, d2 data members*/
   friend Date operator - (Date &d1, Date &d2)
   {

        int year, month, day, totalDays;

        year = d1.year - d2.year;
        month = d1.month - d2.month;
        day = d1.day - d2.day;

        Date tempD = Date(day,month,year);

        return tempD;
   }


public:
    /*constructor 1: default*/
    Date()
    {
        setDate();
    }

    /*constructor 2*/
    Date(int d, int m, int y)
    {
        day=d;
        month=m;
        year=y;
    }

    setDate()
    {
        std::cout<<"Enter the day (1-31): ";
        std::cin>>day;
        while(day<0 || day>31)
        {
            std::cout<<"Enter the 'day' again. Must be integer between 1 and 31:";
            std::cin>>day;
        }

        std::cout<<"Enter the month (1-12): ";
        std::cin>>month;
        while(month<0 || month>12)
        {
            std::cout<<"Enter the 'month' again. Must be integer between 1 and 12:";
            std::cin>>month;
        }

        std::cout<<"Enter the 'year' (1900 - 2300): ";
        std::cin>>year;
        while(year<1900 || year>2300)
        {
            std::cout<<"Enter the 'year' again. Must be integer between 1900 and 2300:";
            std::cin>>year;
        }
    }

    void displayDate()
    {
        std::cout<<"a date as yyyy-mon-day: "<<year<<"-"<<month<<"-"<<day<<std::endl;
    }

    void displayAge()
    {
        if(month<0 && day<0)
        {
            std::cout<<"you are "<<year-1<<" years old. \n";
            std::cout<<"you are "<<(0-month)<<" months and "<<(0-day)<<" days away from your "
            <<year<<" years old birthday."<<std::endl;
        }
        else if(month<0 && day>0)
        {
            std::cout<<"you are "<<year-1<<" years old. \n";
            std::cout<<"you are "<<(0-month)<<" months less than "<<day<<" days"
            <<" away from your "<<year<<" years old birthday."<<std::endl;
        }
        else if(month>0 && day<0)
        {
            std::cout<<"you are "<<year<<" years old. \n";
            std::cout<<"you are "<<(0-day)<<" days away from "<<year<<" years and "<<month
            <<" months old."<<std::endl;
        }
        else
        {
            std::cout<<"you are "<<year<<" years, "<<month<<" months and "
            <<day<<" days old."<<std::endl;
        }

    }


private:
    int month;
    int day;
    int year;
};



#endif // DATE_H
