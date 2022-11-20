/*Question 2: Write a menu driven program to
 Input a string
 Reverse a string
 Compare two strings
 Concatenate two string
Program should end on Quit.*/

#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib>

using namespace std;

void inputString(char *p);
void reverseString(char *p);
bool compareString(char *p, char *q);
void concatString(char *p, char *q);


char name[80];   //global char array variable, preceded by :: when used in functions
char name2[80];

int main()
{

    string again;

    do
    {
        char choice;   //must use char to make while loop choice,
                   //if use int type --> infinite loop when enter char other than int type

        cout<<"Please make a choic:"<<endl;
        cout<<"enter 1 to input a string"<<endl;
        cout<<"enter 2 to reverse a string"<<endl;
        cout<<"enter 3 to compare two strings"<<endl;
        cout<<"enter 4 to concatenate two strings"<<endl;

        cin>>choice;  //cin don't absorb the enter key '\n' after the user make selection
                  //use extra getline() to absorb the enter key '\n'

                  /*menu selection input validation*/
        while(choice!='1' && choice!='2' && choice!='3' && choice!='4')
       {
            cout<<"You entered an invalid choice. Please enter 1 between 4: ";
            cin>> choice;
       }

       if(choice=='1')
       {
            inputString(name);
            cout<<"1. Global variable name is "<<::name;
       }
       else if(choice=='2')
      {
            reverseString(name);
            cout<<"2. Global variable name is "<<::name;
       }
       else if(choice=='3')
      {
            bool result = compareString(name,name2);

           if(result)
          {
               cout<<"\nthe two strings is the same."<<endl;
               cout<<"3. Global variable name is "<<::name<<endl;
               cout<<"3. Global vairable name2 is "<<::name2<<endl;
           }

           else
          {
               cout<<"\nThe two strings is NOT the same."<<endl;
               cout<<"3. Global variable name is "<<::name<<endl;
               cout<<"3. Global vairable name2 is "<<::name2<<endl;
          }

       }
       else if(choice=='4')
      {
            concatString(name,name2);
            cout<<"\nThe two string is concatenated to first string:"<<endl;
            cout<<"4. Global variable name (the 1st string) is modified to: "<<::name<<endl;
            cout<<"4. Global variable name2 (the 2nd string) is not changed as: "<<::name2<<endl;
      }

          /*ask user whether want to play again?*/
      cout<<"\n\nEnter \"quit\" to quit program: "<<endl;
      getline(cin,again);
      }
      while(again!="quit");




      return 1;
}


/*function to ask user to input a sentence to be assigned to caller's char array.
  caller's char array is pass into function by reference with a pointer */
void inputString(char *p)
{
    cout<<"Please enter a sentence less than 79 letters includeing space: "<<endl;
    cin.getline(p,80);   //because usered enter key after make manu selection stored in input buffer, absorb it first
    cin.getline(p,80);

   /*  cout<<"Insdie inputstring() function, You entered: ";

    while(*p)
    {
        cout<<*p;
        p++;
    }

    cout<<endl;   */
}


/*caller's char array(string) passed as argument into function by referece with a pointer
  function first ask user to input a sentence for this argument, and then reverses this argument */
void reverseString(char *p)
{
    inputString(p);

    int sLength=0;
    while(*p)
    {
        sLength++;
        p++;          //now p points to last element '\0'
    }

    //cout<<"string length is "<<sLength<<endl;   //not including '\0'

    for(int i=0; i<sLength/2; i++)
      {
          char temp= *(p-1-i);
          *(p-1-i)= *(p-sLength+i);
          *(p-sLength+i)= temp;
      }

}

/*ask user to input 2 strings for 2 global char arrays
  then compare them, if same return ture, else return false */
bool compareString(char *p, char *q)
{
    cout<<"Please enter a sentence less than 79 letters includeing space: "<<endl;
    //user inputs the first string
    cin.getline(p,80);    //to absorb the enter key after user make menu selection by cin
    cin.getline(p,80);   //because user's enter key after make manu selection stored in input buffer, absorb it first

    cout<<"Please enter a sentence less than 79 letters includeing space: "<<endl;
    //user inputs the second string
    cin.getline(q,80);

    while(*p && *q)
    {
        if(*p==*q )
        {
                        //in each loop, compare one char, if matches, doing nothing
        }
        else
            return false;

        p++;
        q++;
    }

    if(*p=='\0' && *q=='\0')
        return true;
    else
        return false;
}

/*ask user to input 2 strings to store in 2 global char arrays
  then concatenate the 2nd string to the 1st string. */
void concatString(char *p, char *q)
{
    cout<<"Please enter a sentence less than 79 letters includeing space: "<<endl;
    cin.getline(p,80);   //to absorb the enter key after user input menu selection
    cin.getline(p,80);   //because usered enter key after make manu selection stored in input buffer, absorb it first
    cout<<"Please enter a sentence less than 79 letters includeing space: "<<endl;
    cin.getline(q,80);

    while(*p)
    {
        p++;     //move 1st string p's pointer to its end element: '/0'
    }

    while(*q)
    {
        *p = *q;     //string q's last element '\0' is not copied to string p
        p++;
        q++;
    }

    *p='\0';          //add '\0' to the end element of string p

}
