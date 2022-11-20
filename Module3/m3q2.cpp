/*Question 2
(Sales Commission Calculator) A large company pays its salespeople on a commission basis.
The salespeople each receive $200 per week plus 9% of their gross sales for that week.
For example, a salesperson who sells $5000 worth of chemicals in a week receives $200 plus 9% of $5000, or a total of $650.
Develop a C++ program that uses a while statement to input each salesperson¡¯s gross sales for last week and
calculates and displays that salesperson¡¯s earnings.
You must process one salesperson¡¯s figures at a time.*/

#include<iostream>
#include<string>    //for string
#include<iomanip>  //for setprecision(2), fixed


using namespace std;

/*user's function prototype*/
void paySalesPerson(string name, double sales);


int main()
{
    string staffName="";
    double sales=0;

    char anotherRun = 'n';
    int counter = 1;

    do
    {
        /*prompt to ask for a staff's name  */
        cout<<"\nPlease enter a staff's full name: ";

        /*getline() function require to include <string>, it allows white space input
          getline() won't read properly after 1st iteration because it reads a new line character from input buffer
          when you enter 'y' to confirm anotherRun, you actually enter 'y' and 'enter_key' which is a new line character
          this \n will remain in the input buffer, you can use cin.get() to read off this new line character after 1st iteration
          use a counter to know the number of iteration, the 1st loop iteration does not have this new line character,
          so don't use cin.get() in the first iteration of loop */
        if(counter==1)
        {
        }
        else{cin.get();}

        getline(cin,staffName);
        counter++;

        //prompt to ask for his/her gross sales amount
        cout<<"Please enter "<<staffName<<"\'s gross sales amount for last week: ";
        cin>>sales;


        /*calculate and display a sales person's pay*/
        paySalesPerson(staffName, sales);

        /*prompt to ask for whether enter another sales person's name and his/her sales */
        cout<<"please enter 'y' to calculate for another sales person, any other key to stop: ";
        cin>>anotherRun;
    }
    while(anotherRun == 'y');

}


/*user's function definition*/
void paySalesPerson(string name, double sales)
{
    double total = sales*0.09 + 200;
    cout<<setprecision(2)<<fixed;
    cout<<name<<" erans $"<<total<<" for last week. "<<endl;
}
