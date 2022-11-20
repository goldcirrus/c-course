/*Write a Code to take the user input for n and print the sum of equation
1 + 1/1! + 2/2! + 3/3! + 4/4!  Till n/n!
pattern = 1+ 1/(1-1)! + 1/(2-1)! + 1/(3-1)! + 1/(4-1)! + ... + 1/(n-1)!
        = 1+1/0! + 1/1! + 1/2! + 1/3! + .... + 1/(n-1)!
*/

#include <iostream>
#include <iomanip>          // for float number display format
#include <string>

using namespace std;

int main()
{
    int n;
    cout<<"Please enter an integer larger than 0 for upper limit: ";
    cin>>n;

    while(n<1)
    {
        cout<<"Must enter an integer larger than 0, at least is 1: ";
        cin>>n;
    }

    double sum=1;

    int factorial=1;

   if(n>=1)
   {         //each outer for loop body is an equation component
        for(int numEq=1; numEq<=n;++numEq)
       {    /*calculate n!(factorial) for each equation Element*/
            for(int numF=1; numF<=numEq; numF++)
            {
                factorial *= numF;
            }
            cout<<"\n for each eqation component divisor "<<numEq<<"!="<<factorial<<endl;

            sum = sum + static_cast<double>(numEq)/factorial;
            cout<<" From 1 upto "<<numEq<<"/"<<numEq<<"!'s sum is "<<sum<<endl;

            factorial=1;  //reset factorial to 1 for the next equation element
       }
       cout<<"\nyou entered "<<n<<". The sum of the equation: 1 + 1/1! + 2/2! + 3/3! + 4/4! +...+ n/n! = "<<sum<<endl;
   }


}
