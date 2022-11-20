#include <iostream>
#include<string>

using namespace std;

void displayName(string s[], int l)
{
    for(int i=0; i<l; i++)
        cout<<s[i]<<endl;
}

int main()
{
    char s1[15] = {'A','l','c','e',' ','T','l','a','\0'};
    char s2[15] = {'D','a','v','e',' ','L','i','m','\0'};;
    char s3[15] = "Frank Johbs";
    char s4[15] = "JAck London";
    char s5[15] = "Apple Lo";
    char s6[15] = "Pear Habour";
    char s7[15] = "Cad Dove";
    char s8[15] = "Joe King";
    char s9[15] = "Sobe Lie";
    char s10[15] = "Fname Lname";

    string students[10] ={s1,s2,s3,s4,s5,s6,s7,s8,s9,s10};

    string student[10]={"abc s1", "efg s2"};

    displayName(students,10);

    string x;
    x="sfdsf";
    cout<<x;
}
