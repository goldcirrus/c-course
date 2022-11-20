#include "distance.cpp"
#include <iostream>
#include <conio.h>  //for getch() function and clrscr() function

using namespace std;

int main()
{
//  clrscr();
  Distance ob1;
  Distance ob2;
  Distance ob3;  //Invoked constructor1

  cout<<"\n=====Enter Data for OBJECT1=====\n";
  ob1.setData();   //set obj1's data member's value

  cout<<"\n\n=====Enter Data for OBJECT2=====\n";
  ob2.setData();    //set obj2's data member's value


  int choice=1;   //user input to make choose which operation to do or quit
  int opt=0;       //for +,-,* operations, using if(opt==1) to display the obj3's data member's value
  int data;       //taking int type user input for mixture * operation between int and an object

  while(choice !=0)
  {
    opt=0;

    cout<<"\nChoose your choice\n";
    cout<<"1)  Addition            ( + )\n";
    cout<<"2)  Subtraction         ( - )\n";
    cout<<"3)  Multiplication      ( * )\n";
    cout<<"4)  Comparision         ( == )\n";
    cout<<"5)  Comparision         ( < )\n";
    cout<<"6)  Comparision         ( > )\n";
    cout <<"0)  Quit                \n";
    cout<<"Enter your choice(an integer number): ";

    cin>>choice;
    cout<<endl<<endl;

    switch(choice)
    {
       case 1 : {
           ob3 = ob1 + ob2;  //must redefine + between two objects(Distance type)
           opt=1;
           break;}

       case 2 :  {
           ob3 = ob1 - ob2;
           opt=1;
           break;}

       case 3 :
           cout<<"\nEnter integer to be multiplied: ";
           cin>>data;   //taking user input to make a mixture * operation between int and an object

           ob3 = data * ob1; //mixture operation between int(type) and an object(Distance)
           opt=1;
           break;

       case 4 :
           {
              if(ob1 == ob2)
                { cout<<"\nBoth Objects are equal or same value\n";}
              else
                { cout<<"\nThey are Unequal\n";}
              //getch();

              break;
           }

       case 5 :  {
         if(ob1 < ob2)
           { cout<<"\nObject1 is Less than Object2\n";}
         else
           { cout<<"\nObject2 is Less than Object1\n";}
        // getch();

         break;
       }

       case 6 :
        {
            if(ob1 > ob2)
              { cout<<"\nObject1 is Greater than Object2\n";}
            else
              { cout<<"\nObject2 is Greater than Object1\n";}
        // getch();

            break;
        }


       case 0:
           cout<<"\n\nYou choose to quit! Have a nice day....\n";
          //getch();
           break;

       default :
           cout << "Invalid option ";
    }

       //for +,-,* operations, using if(opt==1) to display the obj3's data member's value
    if (opt==1)
    {
        cout<<"\nResult in OBJECT3 is: \n";
        ob3.display();
        cout<<endl<<endl;
        //getch();
    }
  }


  return 1;
}

/*  clrscr() function is a predefined function in "conio.h" (console input output header file)
used to clear the console screen. It is a predefined function,
by using this function we can clear the data from console (Monitor).
Using of clrscr() is always optional but it should be place after variable or function declaration only.

   getch() function is a predefined function in "conio.h" (console input output header file)
will tell to the console wait for some time until a key is hit given after running of program.
By using this function we can read a character directly from the keyboard.
Generally getch() are placing at end of the program after printing the output on screen.

*/
