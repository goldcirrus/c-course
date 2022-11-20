
#include <iostream>
#include <exception>

using namespace std;

/* Derived exception class */
class OverSpeed : public exception{
  int speed;
public :
    //override base class(exception)'s virtual function what() to represent error message
  const char* what(){
      return "error message: check up your speed!";
  }

  void getSpeed()
  {
      cout <<"Your car speed is" << speed<< endl;
  }

  void setSpeed(int sp)
  {
      this->speed=sp;
  }
};


// create another class to make ZeroSpeed. when speed exceeds 250, this exception is called and after that it should again start increasing the speed
class Car{
  int speed;
public:
  Car()   //constructor
 {
    speed=0;
    cout <<"speed is zero"<< endl;
 }

   void accelerate()
   {
      for (;;)
     {    speed += 10;
          cout << "Speed is " << speed << endl;

          if (speed >= 250)   //if something wrong, to create exception Overspeed object
          {
             OverSpeed os;         //os can throw error message(exception) and setSpeed value for calling program to getSpeed
             os.setSpeed(speed);
             throw os;             //throw a OverSpeed exception object os(contains error message in its what() function)
          }
     }
   }
};

int main()
{
   int a=2,b=3;
   float  d;

   try
   {
              if((a-b)!=0)
              {
                 d=5/(a-b);
                 cout<<"Result is:"<<d<<endl;
              }
              else
              {
                 throw(a-b);  //throw an integer variable
              }
   }

   catch(int i)     //catch an integer number, then doing an action with catched integer variable
   {
              cout<<"Exception thrown! Answer is infinite as denominator is:"<<i;
   }



    Car c;

    try{
        c.accelerate();
    }
    catch (OverSpeed s)  //catch the OverSpeed object:s. s has its member function being called: error message for .what(), and speed value for .getSpeed()
    {                      //then, doing actions with catched OverSpeed object

        cout << s.what() <<endl;
        s.getSpeed();

    }

    return 0;

}

