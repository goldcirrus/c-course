/*This is the driver program to create GradeBooks Class objects and call the object's member functions '*/

#include <iostream>
#include "GradeBooks.cpp"

using namespace std;

int main()
{
    GradeBooks gb1("COMP 1010 Introduction to Java Programming. \n");

             // display initial value of courseName for each GradeBook
    cout << "A GradeBooks object is created for course name: " << gb1.getCourseName();

              // run the function to get the class average here
    gb1.determineClassAverage();
}
