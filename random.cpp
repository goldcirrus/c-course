#include <iostream>
#include <cstdlib>  //function strand() and rand
#include <ctime>  //contains
#include <iomanip>

using namespace std;

int main()
{
    /*to create seed for rand() function with current time */
          srand(static_cast<unsigned int>(time(0)));

    /* generate random number between 1 and 100
         1 is shiftValue equal to the first number in the range of generated numbers
         100 is scalingFactor equal to the width of the range of generated numbers
         variable answer stores the generated random number between 1 and 100 */
          int answer = 1 + rand() % 100;

          cout<<answer;
}
