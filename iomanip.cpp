#include <iostream>     // std::cout, std::right, std::endl
#include <iomanip>      // std::setw

using namespace std;

int main () {

  int val = 15;
  double x = 5.0;

  cout << right << setw(10) << val << endl;  //on right justified, width:10
  cout << internal << setw (10) << setfill ('#') << val << endl;  //fill # on left
  cout << left << setw(10)  << setfill('%') << val << endl;

  cout << oct << showbase << val << endl;
  cout << uppercase << hex << val << endl;
  cout << scientific << dec << 120.00 << endl;
  cout << setprecision( 2 ) << fixed << val <<endl;  //val is int
  cout <<  x <<endl;    //x is double
  cout << setw( 10 ) << setprecision( 2 ) << right << fixed
      << showpoint << 1.36987 <<endl;




      int total=5;
      int gradeCounter=6;
             // calculate average of all grades entered; cast total from int to double
      double average = static_cast< double >( total ) / gradeCounter;
              //(with two digits of precision, fixed)
      cout << setprecision( 2 ) << fixed;
      cout << "Class average is " << average << endl;

  return 0;
}
