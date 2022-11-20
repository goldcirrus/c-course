#include <iostream>
#include <conio.h>
//using namespace std;

class Distance
{
private:
   int feet;
   float inches;

public:
//constructor1: default constructor is overriden
    Distance()
    {
        feet=0;
        inches=0;
    }

//constructor2
    Distance(int ft,float inch)
    {
        feet=ft;
        inches=inch;
    }

    //input feet and inches by user from keyboard
    void setData()
    {
        std::cout<<"Enter Feet(integer only) and inches respectively: ";
        std::cin>>feet>>inches;
    }

    //display object's data members: feet, inches
    void display()
    {
        std::cout<<"Feet : "<<feet<<std::endl;
        std::cout <<"Inches :"<<inches;
    }

    //redefine/operate overload function: + between two objects of the Distance Class type.
    //Operator function for + declaration in Class Distance for Distance objects
    //argument pass in by reference: caller's Distance object's data members can be modified in the function
    friend Distance operator + (Distance &ob1, Distance &ob2)
    {
         Distance temp;   //hold the value of a object temporarily
         temp.feet   = ob1.feet   + ob2.feet;     //make fundamantal + operations
         temp.inches = ob1.inches + ob2.inches;    //between object's data members

         if(temp.inches > 12)
        {
            temp.inches -= 12;   //every 12 inches --> one more foot
            temp.feet++;
        }

        return(temp);  //return a copy of an object by value which can be assigned to another object in driver program
    }

    /*redefine - between two objects of this Distance Class type.
      Operator function for - declaration in Class Distance for Distance objects
      argument pass in by reference  */
    friend Distance operator - (Distance &ob1, Distance &ob2)
    {
         Distance temp;   //hold the value of a object temporarily
         temp.feet   = ob1.feet  - ob2.feet;     //make fundamantal + operations
         temp.inches = ob1.inches - ob2.inches;    //between object's data members

         if(temp.feet<0 && temp.inches>0)
         {
             temp.inches -= 12;  //borrow 12 -inches from -feet to offset positive inches
             temp.feet ++;       //lose 12 -inches is one more +foot
         }
         if(temp.feet>0 && temp.inches<0)
         {
             temp.inches +=12;   //borrow 12 +inches from +feet to offset negative inches
             temp.feet--;      //loss 12 +inches is one more -foot
         }
         else
         {
             //nothing, no borrowing of inches from feet part
         }

         return(temp);  //return a copy of an object by value which can be assigned to another object in driver program

    }


     /*redefine * between two objects of this Distance Class type.
      Operator function for * declaration in Class Distance for Distance objects
      argument pass in by reference  */
    friend Distance operator *(int d, Distance &ob)
    {
          Distance temp;   //hold the value of a object temporarily
          temp.feet = ob.feet * d;
          temp.inches = ob.inches *d;

          while(temp.inches >= 12)
        {
            temp.inches = temp.inches - 12;  //borrow 12 inches from inches part to 1 foot
            temp.feet = temp.feet+1;
        }

          return(temp);  //return a copy of an object by value which can be assigned to another object in driver program
    }


    /*redefine == between two objects of this Distance Class type.
      Operator function for == declaration in Class Distance for Distance objects comparision
      argument pass in by reference  */
    friend int operator ==(Distance &ob1, Distance &ob2)
   {
         if(ob1.feet==ob2.feet && ob1.inches==ob2.inches)
            return 1;    //1 is ture
         else
            return 0;     //0 is false
   }

   /*redefine < between two objects of this Distance Class type.
      Operator function for == declaration in Class Distance for Distance objects comparision
      argument pass in by reference  */
    friend int operator < (Distance &ob1, Distance &ob2)
   {
         Distance temp = ob1 - ob2;
         if(temp.feet<0 || temp.inches<0)
            return 1;
         else
            return 0;
   }


    friend int operator > (Distance &ob1, Distance &ob2)
    {
         Distance temp = ob1 - ob2;
         if(temp.feet<0 || temp.inches<0)
            return 0;
         else
            return 1;
    }

};
