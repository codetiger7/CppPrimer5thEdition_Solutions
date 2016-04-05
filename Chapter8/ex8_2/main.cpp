// Exercise 8.2: Test your function by calling it, passing cin as an argument.

#include <iostream>
#include <string>
#include <fstream>

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
    test(cin);

    return 0;
}

