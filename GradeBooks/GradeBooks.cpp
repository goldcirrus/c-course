/* GradeBooks.cpp is the implementation part of GradeBooks Class */

#include <iostream>
#include <iomanip>

#include "GradeBooks.h"

using namespace std;

     // constructor initializes courseName with string supplied as argument
   GradeBooks:: GradeBooks( string name )
      : courseName(name)   // member initializer to initialize courseName
   {
      // empty body
   } // end GradeBook constructor

   // function to set the course name
   void GradeBooks::setCourseName( string name )
   {
      courseName = name; // store the course name in the object
   } // end function setCourseName

   // function to get the course name
   string GradeBooks::getCourseName() const
   {
      return courseName; // return object's courseName
   } // end function getCourseName

   // display a welcome message to the GradeBook user
   void GradeBooks::displayMessage() const
   {
      // call getCourseName to get the courseName
      cout << "Welcome to the grade book for\n" << getCourseName()
           << "!" << endl;
   } // end function displayMessage


//this function ask for grade input in a loop and finally display the average of the inputs
void GradeBooks::determineClassAverage() const
{
   // initialization (local variable) phase
   int total = 0;                  // sum of grades entered by user
   unsigned int gradeCounter = 0;  // number of grades entered

   // processing phase
   // prompt for input and read grade from user
   cout << "Enter a positive integer grade or -9 to quit: ";
   int grade = 0; // grade value
   cin >> grade; // input grade or sentinel value

   // loop until sentinel value read from user
//@ make a statement to run the loop till sentinel value is entered
   while(grade != -9)
   {
      total = total + grade; // add grade to total
      gradeCounter = gradeCounter + 1; // increment counter

      // prompt for input and read next grade from user
      cout << "Enter grade or -9 to quit: ";
      cin >> grade; // input grade or sentinel value
   } // end while

   // termination phase: display teh average of inputs
   if ( gradeCounter != 0 ) // if user entered at least one grade...
   {
      // calculate average of all grades entered
      double average = static_cast< double >( total ) / gradeCounter;

      // display 7total and average (with two digits of precision)
      cout << "\nTotal of all " << gradeCounter << " grades entered is "
         << total << endl;
      cout << setprecision( 2 ) << fixed;
      cout << "Class average is " << average << endl;
   } // end if
   else // no grades were entered, so output appropriate message
      cout << "No grades were entered" << endl;
} // end function determineClassAverage


