
// GradeBook class definition in a separate file from main so that we may use this in all the programs now
#include <iostream> 
#include <string> // class GradeBook uses C++ standard string class

// GradeBook class definition
class GradeBook
{
public:
   // constructor initializes courseName with string supplied as argument
   explicit GradeBook( std::string name )
      : courseName( name ) // member initializer to initialize courseName 
   {
      // empty body
   } // end GradeBook constructor

   // function to set the course name
   void setCourseName( std::string name )
   {
      courseName = name; // store the course name in the object
   } // end function setCourseName

   // function to get the course name
   std::string getCourseName() const
   {
      return courseName; // return object's courseName
   } // end function getCourseName

   // display a welcome message to the GradeBook user
   void displayMessage() const
   {
      // call getCourseName to get the courseName
      std::cout << "Welcome to the grade book for\n" << getCourseName()  
         << "!" << std::endl;
   } // end function displayMessage
   void determineClassAverage() const; // averages user-entered grades
private:
   std::string courseName; // course name for this GradeBook
}; // end class GradeBook  
