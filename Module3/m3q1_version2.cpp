/*Write a C++ program that will run as a random guessing game. The game is to
generate a random number from 1©\100. The player/guesser needs to guess the
number. Computer checks the guessers guess and compares with the number
generated:*/

#include <iostream>
#include <cstdlib>  //function strand() and rand
#include <ctime>  //contains
#include <iomanip>

using namespace std;

/*user defined functions prototype */
void guessNumber();


int main()
{
    guessNumber();

    return 0;
}

/*user function's definition */
void guessNumber()
{
    int guess=0;
    int answer=0;
    char playAgain='n';

     /* do-while(sentinel) loop, at least run the game once */
    do
    {
       /*to create seed for rand() function with current time */
          srand(static_cast<unsigned int>(time(0)));

      /* generate random number between 1 and 100
         1 is shiftValue equal to the first number in the range of generated numbers
         100 is scalingFactor equal to the width of the range of generated numbers
         variable answer stores the generated random number between 1 and 100 */
          answer = 1 + rand() % 100;
                                       /*cout<<"computer makes "<<answer;   for test purpose   */

      // prompt for asking an enter from a player
      cout << "Computer picks up a number between 1 and 100. Can you guess what is it?\n"<<endl;
      cout << "Please enter your first guess. " ;
      cin >> guess;

      /* each loop ask for a new guess value from a player,
         untill a player's guess matches the computer's number to terminate this loop
         variable answer's value not changed in each loop iteration,
         variable guess's value is changed by the input from a player in each loop iteration */
      while ( guess != answer )
        {
            if(guess>answer)
               {
                   cout<<"your guess is too high, try lower again: ";
                   cin >> guess;
               }
            else
            {
                   cout<<"your guess is too low, try lower again: ";
                   cin >> guess;
            }
        }

      /* only after last loop terminates(a match found),
         prompt to ask whether do this game again? */
      cout << "\nMatch Found! You guessed the number:"<<answer<<endl;
      cout     << "Would you like to play again? Enter 'y' to play again, enter any other key to quit. ";
      cin >> playAgain;

      cout << endl;               //new line
   } while ( playAgain == 'y' );   //while true, do it again
}




