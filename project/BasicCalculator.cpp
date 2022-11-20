#include <iostream>
#include <iomanip>

#include "BasicCalculator.h"

using namespace std;

double BasicCalculator::operate(double x, char operation, double y)
    {
        double result;

        switch(operation)
       {
          case '+':
            result=x+y;
            cout<<x<<operation<<y<<'='<<result<<endl;
            return result;
            break;
          case '-':
            result = x - y;
            cout<<x<<operation<<y<<'='<<result<<endl;
            return result;
            break;
          case '*':
            result= x * y;
            cout<<x<<operation<<y<<'='<<result<<endl;
            return result;
            break;
          case '/':
            result= x / y;
            cout<<x<<operation<<y<<'='<<result<<endl;
            return result;
            break;
          case 's':
            result= x * x;
            cout<<"square of "<<x<<'='<<result<<endl;
            break;
          case 'r':
            result= sqrt(x);
            cout<<"square root of "<<x<<'='<<result<<endl;
            break;
          default:
            return 0;
       }
    }
