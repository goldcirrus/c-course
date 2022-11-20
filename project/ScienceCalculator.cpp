#include <iostream>
#include <iomanip>

#include "ScienceCalculator.h"

using namespace std;

double ScienceCalculator::operate(double x, char operation)
    {
        double pi=3.1415926;
        double result=0.0;

        switch(operation)
       {
          case 'c':
            result= cos(x*pi/180);
            cout<<"cos("<<x<<")="<<result<<endl;
            return result;
            break;
          case 's':
            result= sin(x*pi/180);
            cout<<"sin("<<x<<")="<<result<<endl;
            return result;
            break;
          case 't':
            result= tan(x*pi/180);
            cout<<"tan("<<x<<")="<<result<<endl;
            return result;
            break;
          case 'l':
            result= log(x);
            cout<<"log("<<x<<")="<<result<<endl;
            return result;
            break;
          case 'e':
            result= exp(x);
            cout<<"base E exponent of "<<x<<" = "<<result<<endl;
            return result;
            break;
          default:
            return 0;
       }
    }
