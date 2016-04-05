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
    ifstream f;

    f.open("text.txt");

    test(f);

    return 0;
}

