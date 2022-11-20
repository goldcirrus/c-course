#include <iostream>
#include<string.h>
using namespace std;

void sort(int  marks[10]);
void display(int marks[10]);

int main() {
    int marks[10];

    int i;
    for (i=0; i<10; i++)
    {

        cout << "Enter marks : ";
            cin >> marks[i];
    }
    sort(marks);

    display(marks);

    return 0;
}

void sort(int marks[10]){
    // function display has been created for you.
// Create the function sort to sort the marks in ascending order
}
void display(int marks[10]) {


    cout <<"Displaying marks in Ascending Order " << endl;

    for (int i = 0; i <10; ++i)
        {
        cout<< marks[i] << "   "  <<endl;

    }

    }




