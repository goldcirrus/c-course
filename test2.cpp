#include <ctime>
#include <iostream>
#include <cstdlib>

using namespace std;

time_t dateToTimeT(int month, int day, int year) {
  // january 5, 2000 is passed as (1, 5, 2000)
  tm tmp = tm();
  tmp.tm_mday = day;
  tmp.tm_mon = month - 1;
  tmp.tm_year = year - 1900;

  return mktime(&tmp);
}

time_t badTime() {
  return time_t(-1);
}



int main() {
    // current date/time based on current system
   time_t now = time(0);

   cout << "Number of sec since January 1,1970 is:: " << now << endl;

   tm *ltm = localtime(&now);

   int x = ltm->tm_year;
   cout<<" current year x is "<<x<<endl;
   int y = 1900+ltm->tm_mon;
   cout<<"current month is "<<y<<endl;
   int z = 1+ltm->tm_hour;
   cout<<"time is "<<z<<endl;

   // print various components of tm structure.
   cout << "Year:" << 1900 + ltm->tm_year<<endl;
   cout << "Month: "<< 1 + ltm->tm_mon<< endl;
   cout << "Day: "<< ltm->tm_mday << endl;
   cout << "Time: "<< 5+ltm->tm_hour << ":";
   cout << 30+ltm->tm_min << ":";
   cout << ltm->tm_sec << endl;

	return 0;
}
