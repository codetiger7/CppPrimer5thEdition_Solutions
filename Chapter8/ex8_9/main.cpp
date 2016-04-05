/// Exercise 8.9: Use the function you wrote for the first exercise in § 8.1.2 (p. 314)
/// to print the contents of an istringstream object.

#include <iostream>
#include <string>
#include <sstream>
using namespace std;



std::istream& test(std::istream& in)
{
    std::string word;

    while(in >> word)
    {
        cout << word << " ";
    }

    cout << std::endl;

    in.clear();

    return in;
}

int main()
{
    string st {"/// Exercise 8.9: Use the function you wrote for the first exercise in § 8.1.2 (p. 314)/// to print the contents of an istringstream object."};

    istringstream istr(st);

    test(istr);


    return 0;
}

