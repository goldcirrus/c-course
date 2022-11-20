#include <iostream>
#include<string>

#include<algorithm>

#include<cstdlib>
#include<iomanip>

using namespace std;

void sort(int  marks[10], int arraySize);  //function prototype: sort an array parameter
void display(int marks[10]);  //function prototype: display an array's elements

int main() {
    int marks[10];          //declare an array with its size

    int i;                  //popular the above array with elements value via a for loop
    for (i=0; i<10; i++)
    {

        cout << "Enter marks : ";
        cin >> marks[i];
    }

    display(marks);

    sort(marks,10);         //calling function and pass in an array as its argument

    display(marks);

    return 0;
}

void sort(int marks[], int arraySize){

    // Create the function sort to sort the marks in ascending order
    /*When an array is passed to a general-purpose function designed to handle arrays of any size,
    the size of the array must be passed as an additional argument.*/
    for(int next=1; next<arraySize; next++ )
    {                 //must use 10, sizeof(marks) won't work properly
        int insertValue = marks[next];
        int insertIndex = next;

        while((insertIndex>0) && (marks[insertIndex-1]>insertValue))
        {
            //previous element move up assigned to insertIndex postion
            marks[insertIndex] = marks[insertIndex-1];

            insertIndex--; //examine previous element
        }

        marks[insertIndex]= insertValue;
    }
}


void display(int marks[10]) {


    cout <<"Displaying marks in Ascending Order " << endl;

    for (int i = 0; i <10; ++i)
        {
        cout<< marks[i] << "   "  <<endl;

    }

    }




