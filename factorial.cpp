#include <iostream>
using namespace std;

int main()
{
    int n;
    unsigned long long factorial = 1;

    cout << "Enter a positive integer: ";
    cin >> n;



        for(int numEq=1; numEq<=n;++numEq)
       {    /*calculate n!(factorial) for each equation Element*/
            for(int numF=1; numF<=numEq; numF++)
            {
                factorial *= numF;
            }

            cout<<"for each eqation #"<<numEq<<"!="<<factorial<<endl;
            factorial=1;
           // sum = sum + static_cast<double>(numQ)/factorial;
            //cout<<"sum="<<sum<<endl;
       }
      // cout<<"you enter "<<n<<". The sum of the equation is 1 + 1/1! + 2/2! + 3/3! + 4/4! +...+ n/n! = "<<sum<<endl;


    return 0;
}
