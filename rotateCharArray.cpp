#include <iostream>
//#include <algorithm>
//#include <array>       //c++ 11 not work for my version of CodeBlock
//#include <iterator>

using namespace std;

int getLength(char *);
void toUpper(char *);
void toLower(char *);
void toProper(char *);
void toPattern(char *);

int main()
{
    char name[80];

    cout << "Enter a name :";
    cin >> name;

    int r= getLength(name);
    cout<<"String name's lenght is "<<r<<endl;

    toUpper(name);
    cout << "The string in Capital Letters is: " << name<<endl;
    // Arbitrary element processing on the container.

    toLower(name);
    cout << "The string in lower case letters is: " << name<<endl;

    toProper(name);
    cout << "The string in proper case letters is: " << name<<endl;

    toPattern(name);
    cout << "The string in pattern case letters is: " << name<<endl;
}

/*functon pass argument by reference with a pointer to modify this argument in caller
  change argument string to Upper case */
void toUpper(char *p)
{

    while (*p)
    {

      *p = (*p>='a' && *p<='z') ? *p-32 : *p;    //if..return..   else..return

       p++;    //move to next element's address

    }


}


int getLength(char *p)
{

    int ctr=0;  //counter to count index# of characters in the char array

    while (*p)
    {
        cout << *p << " " ;
        ctr++;     //counter++
        p++;      //pointer arithmetic, move to next element's address
    }

    return ctr;
}

/*functon pass argument by reference with a pointer to modify this argument in caller
  change argument string to lower case */
void toLower(char *p) {
    while (*p)
    {
                                                  //'A'is65, 'a'is97
      *p = (*p>='A' && *p<='Z') ? *p+32 : *p;    //if..return..   else..return

       p++;                               //move to next element's address

    }
}

/*functon pass argument by reference with a pointer to modify this argument in caller
  use a counter to indicate the index of the string/char array's character
  change argument string to Upper case for 1st char element, lower case for the rest char elements*/
void toProper(char *p) {
// write code to convert to proper case i.e. firts capital and rest small
     int counter = 1;

     while(*p)
     {
         if(counter==1)
            *p = (*p>='a' && *p<='z') ? *p-32 : *p;     //if 1st element, change to capital letter
         else
            *p = (*p>='A' && *p<='Z') ? *p+32 : *p;     //else elements, change to lower letter

         counter++;
         p++;
     }

}

/*functon pass argument by reference with a pointer to modify this argument in caller
  use a counter to indicate the index# of the string's character
  change odd index# argument string to Upper case for 1st char element, lower case for the rest char elements*/
void toPattern(char *p) {
// write code to convert to the pattern ... aBcDeFgHiJ...one capital and one small
     int counter=1;

     while(*p)
     {
         if(counter%2 == 1)
            *p = (*p>='a' && *p<='z') ? *p-32 : *p;     //if (odd number indexed) elements, change to capital letter
         else
            *p = (*p>='A' && *p<='Z') ? *p+32 : *p;     //else elements, change to lower letter

         counter++;
         p++;
     }

}
