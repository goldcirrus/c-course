#include <iostream>
#include<string.h>

using namespace std;

//swap with argument variables passed by pointer
void swapR(int *, int *);
//swap with arguments variables passed by value
void swapV( int, int );

int main() {

  int a= 10, b=20;
  cout <<"before function call are "<< "a=" << a << " and b=" << b << endl;

  //pass by value, no change of variables in calling function
  swapV(a, b);
  cout <<"after function pass by value to call swapV "<< "a= " << a << " and b=:" << b << endl;

  cout <<"before function call "<< "a = " << a << " and b= " << b << endl;
  //pass by pointer, changes variables in calling function
  swapR(&a, &b);
  cout <<"after function pass by a pointer to the argument to call swapR "<< "a = " << a << " and b = " << b << endl;

    return 0;
}

/*function pass by value: no modification on a, b in caller  */
void swapV(int a, int b)
{

    int c;
    c=a;
    a=b;
    b=c;
}

/*function pass by pointer to argument vaiables
  define function here to declare function's parameter variable as a pointer: (type * parameter)
  when calling function in driver: with argument (& argument_variable)
  modify a, b in caller                            */
void swapR(int *a, int *b)
{
    int c;
    c= *a;
    *a= *b;
    *b = c;
}
