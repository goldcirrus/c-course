// Module 6, Q1: GradeBook class definition in a separate .h header file separated from interface GradeBooks.cpp and client/driver main() function
//so that we may (re)use this Class definition in different client programs

// prevent multiple inclusions of header
#ifndef GradeBooks_H
#define GradeBooks_H

#include <iostream>
#include <string>              // This header introduces string types, character traits and a set of converting functions

//header.h file can not use USING namespace

// GradeBook class definition
class GradeBooks
{

public:
          // constructor initializes courseName with string supplied as argument
   explicit GradeBooks( std::string name );

         // function to set the course name
   void setCourseName( std::string name );

        // function to get the course name
   std::string getCourseName() const;

   // display a welcome message to the GradeBook user
   void displayMessage() const;

   //this function ask for grade input in a loop and finally display the average of the inputs
   void determineClassAverage() const; // averages user-entered grades


private:
   std::string courseName; // GradeBooks Class data member: course name for a GradeBook object
}; // end class GradeBook



#endif
