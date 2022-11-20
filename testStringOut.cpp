#include <iostream>
#include <string>
#include <stdexcept>
#include <sstream>
#include <iomanip>

int main()
{



        std::string x="abc";

        std::ostringstream output;
        output<<std::fixed<<std::setprecision(2);
        output<<"Comission Only Employee name: "<<x;

        std::cout<<output.str();

}
