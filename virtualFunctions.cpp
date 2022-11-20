#include <iostream>
using namespace std;

//Base class has virtual function
class B
{
    public:
       virtual void display()       /* Virtual function in Base Class has implementation */
       {                            // pure virtual function can't have implemenatation
           cout<<"Content of base class B.\n";
       }
};

//class D1 inherits Class B
class D1 : public B
{
    public:
       void display()   //override virtual function in Base Class
         { cout<<"Content of first derived class D1 .\n"; }
};

//class D2 inherits Class B
class D2 : public B
{
    public:
       void display()   //override virtual function in Base Class
         { cout<<"Content of second derived class D2 .\n"; }
};

int main()
{
    B b;       //declare BaseClass object: b
    D1 d1;     //declare and instantiate Derived Class D1's object d1
    D2 d2;     //declare and instantiate Derived Class D2's object d2

  //  b.display();           // base class function
    d1.display();          /* calls display() of class derived D1 */
    d2.display();          /* calls display() of class derived D2 */
  // d1::B.display();
    return 0;

}
