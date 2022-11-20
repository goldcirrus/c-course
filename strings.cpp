
#include <iostream>
#include <string.h>
#include <stdlib.h>

using namespace std;

int main ()
{
  std::string str ("Test string");

  //str.size() get string size
  std::cout << "The size of str is " << str.size() << " bytes.\n";

  //str.at(index) get char at index, has bound check
   for (unsigned i=0; i<str.length(); ++i)
  {
    std::cout << str.at(i);
  }

  //str[index] has no bound check
  for (int i=0; i<str.length(); ++i)
  {
    std::cout << str[i];
  }

  cout<<endl;

  //substr(startIndex, endIndex) return a portion of string
  std::string str1="We think in generalities, but we live in details.";
  std::string str2 = str1.substr (3,5);     // return "think" to str2
  cout<<str2<<endl;

//str.find("search_string") return the position index
  std::size_t pos = str1.find("live");      // return position index of "live" in str
//str.substr(position_index) return portion of str
  std::string str3 = str1.substr (pos);     // get from "live" to the end

//concatnate two strings
  std::cout << str2 << ' ' << str3 << '\n';

  std::cout<<str1<<endl;

//loop to read lines, when string is empty, to stop loop
  std::string content;
  std::string line;
  std::cout << "Please introduce a text. Enter an empty line to finish:\n";
  do {
    getline(std::cin,line);
    content += line + '\n';
  }
  while (!line.empty());
  std::cout << "The text you introduced was:\n" << content;

//swap two strings
  std::string buyer ("money");
  std::string seller ("goods");
  std::cout << "Before the swap, buyer has " << buyer;
  std::cout << " and seller has " << seller << '\n';

  seller.swap (buyer);   //swap seller and buyer's string contents

  std::cout << " After the swap, buyer has " << buyer;
  std::cout << " and seller has " << seller << '\n';

  //only c type, char array works:
   char data1[10], data2[10], data3[3];

    cout << "Enter first name :";
    cin >> data1;
    cout << "Enter last name :";
    cin >> data2;

    if (strcmp(data1,data2)==0)  //only c string: char type array
        cout << "You entererd same words";

    strcat(data1, data2);
    cout << "Your full name is " << data1;

  return 0;
}
