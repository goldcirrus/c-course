/*Question 1
Write a C++ program to input an integer number (up to 5 digits).
The inputted number should be broken into separate digits and do two calculations on that:
1. Check if it is palindrome or not
2. Find the sum of all the digits as a single digit number.*/

#include <iostream>
#include <iomanip>          // for float number display format
#include <string>

using namespace std;

int main()
{
    int number;
    cout<<"please enter a positive integer upto 5 digits"<<endl;
    cin>>number;

    //input validation check to ensure input is positive
    while(number<=0)
    {
        cout<<"please enter a positive integer upto 5 digits"<<endl;
        cin>>number;
    }

    int original_number=number;
    int reversedNum=0;
    int remainder=0;
    int total=0;

    /*use integer division: number%10 to get number's rightmost digit(remainder) and
    number/10 (quotient is integer only without remainder) to truncate number's rightmost digit*/
    do{
        remainder=number%10;           //remainder get the rightmost digit of number
        total = total + remainder;     //total get sum of the digits(remianders in each loop)
        reversedNum = reversedNum*10 + remainder; //add remainder to the right side of reversedNum
        number = number/10;            //number's new value is :number's old value removes its rightmost digit, then number's new value goes to the loop body's first line again

    }while(number!=0);     //in the last loop: number's old value only has one digit left, number's new value becomes 0, then loop stops


    //1. check result whether this input integer is a palindrome number
    cout<<"the reversed number is "<<reversedNum<<endl;

    if(reversedNum==original_number)
        cout<<"Yes, you entered a valid palindrome integer number"<<endl;
    else
        cout<<"No, you entered an invalid palindrome integer number"<<endl;

    //2.display the sum of the each digit in this input number
    cout<<"the sum of all the digits in this number is "<<total<<endl;

    return 0;
}
