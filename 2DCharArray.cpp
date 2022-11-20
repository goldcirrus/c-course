/*Module 4, Question 1, Change the prog18.cpp to list the marks report Alphabetically
// Make a caracter array to store the names of ten students
// make another int marks[10][5] array to store three marks for ten students
// extend the display function to display the name of every student, followed by 5 marks, total , percentage and Grade obtained by the students.
// display() should be called ten time from the loop in the main body of the program
*/

#include <iostream>
#include<cstdlib>
#include<string>
#include<iomanip>

using namespace std;

void displayMarkRow(int marks[10][5], int rowN, int colN);
int getRowTotal(int marks[10][5],int rowN,int colN);
string gradeRow(int marks[10][5],int rowN,int colN);
int getTableTotal(int marks[10][5],int rowN,int colN);

void displayGrade(int marks[10][5],string s[10],int rowM, int colM);


int main() {

    char s1[15] = {'A','l','c','e',' ','T','l','a','\0'};
    char s2[15] = {'D','a','v','e',' ','L','i','m','\0'};;
    char s3[15] = "Frank Johbs";
    char s4[15] = "JAck London";
    char s5[15] = "King Lo";
    char s6[15] = "Pear Habour";
    char s7[15] = "Pdd Isove";
    char s8[15] = "Queoe Jiang";
    char s9[15] = "Sobe Lie";
    char s10[15] = "Tina Lname";

    string students[10] ={s1,s2,s3,s4,s5,s6,s7,s8,s9,s10};

    /*array marks hold marks for 10 students, each row has 5 marks(for 5 different courses) for one student
      ten rows represent 10 student's marks for differnt courses*/
    int marks[10] [5]= {88,86,90,81,84,
                        79,75,72,78,74,
                        62,63,64,65,66,
                        51,52,53,54,55,
                        43,42,47,49,45,
                        32,36,39,35,37,
                        23,25,29,27,24,
                        12,18,15,19,10,
                        98,95,96,97,92,
                        9,7,3,8,10
                        };

    displayGrade(marks,students,10,5);

    return 0;
}


void displayMarkRow(int marks[10][5], int rowN, int colN)
{
    for (int c=0; c<colN; ++c)
        cout<<marks[rowN][c]<<", ";
}

/*get total of each row of marks*/
int getRowTotal(int marks[10][5],int rowN,int colN)
{
    int rowTotal=0;

    for(int c=0; c<colN; c++)
        rowTotal += marks[rowN][c];

    return rowTotal;
}

/*get average of each row grades, then average/10(integer division) --> 1-10 */
string gradeRow(int marks[10][5],int rowN,int colN)
{
    //get average grades for each row/student
    int total = getRowTotal(marks,rowN,colN);
    int average = total/colN;

    string grade;

    switch(average/10)
    {
    case 9:
        grade= "A+";
        break;

    case 8:
        grade= "A";
        break;

    case 7:
        grade= "B";
        break;

    case 6:
        grade= "C";
        break;

    case 5:
        grade= "D";
        break;

    default:
        grade= "F";
    }

    return grade;

}

/*get total grades in the whole marks table */
int getTableTotal(int marks[10][5],int rowM,int colM)
{
    int tableTotal=0;


    for(int r=0;r<rowM; r++)
    {
        for(int c=0;c<colM;c++)
            tableTotal+=marks[r][c];

    }

    return tableTotal;
}

/*display the result */
void displayGrade(int marks[10][5], string s[10], int rowM, int colM)
{
    /*total grades of all students' all courses in the table */
    int tableTotal = getTableTotal(marks,rowM,colM);

    /*each for loop iteration displays one row of marks(a student's record)*/
    for(int r=0; r<rowM; r++)
    {
        cout<<"Student "<<r+1<<": "<<s[r]<<"\'s grades are ";
        displayMarkRow(marks,r,colM);
        cout<<"total grades is "<<getRowTotal(marks,r,colM);
        cout<<endl;
        cout<<"           Grade is "<<gradeRow(marks,r,colM);
        cout<<setprecision(2)<<fixed;
        cout<<". Percentage of this student's total grade among all students' grades is "
            <<static_cast<double>(getRowTotal(marks,r,colM))/tableTotal*100;
        cout<<"%";
        cout<<endl<<endl;
    }

}


