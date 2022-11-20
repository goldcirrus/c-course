// Fig. 9.1: Time.h
// Time class definition.
// Member functions are defined in Time.cpp
#include<string>
// prevent multiple inclusions of header
#ifndef TIME_H
#define TIME_H

// Time class definition
class Time
{
public:
   //Time();   can't use default after write your own constructor

   //explicit constructor Time(int=0, int=0, int=0);
   //when you write your own constructor, you can't use default construct any more
   Time(int, int, int);

   void setTime( int, int, int ); // set hour, minute and second
   void printUniversal() const; // print time in universal-time format
   void print() const; // print time in standard-time format
   ~Time();

private:
   unsigned int hour; // 0 - 23 (24-hour clock format)
   unsigned int minute; // 0 - 59
   unsigned int second; // 0 - 59
}; // end class Time

#endif
