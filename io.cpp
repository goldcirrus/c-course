#include<iostream>

using namespace std;

int main()
{
    int x;   //char can not present EOF

    cout<<"cin.eof() value is: "<<cin.eof()<<endl;

    cout<<"enter a sentence followed by end of file: ";

    while( (x=cin.get() ) != EOF)
    {
        cout.put(x);
    }

    cout<<"now x's value is: "<<x<<endl;
    cout<<"cin.eof() value is: "<<cin.eof()<<endl;


    //flush input stream: to clear the status flags of the input stream
    //and then ignore all cahracters up to the newline.
    cin.clear();

    char buffer[80];
    cout<<"enter a sentence: ";
    cin.getline(buffer,80);
    cout<<"the input line is: "<<buffer<<endl;

}
