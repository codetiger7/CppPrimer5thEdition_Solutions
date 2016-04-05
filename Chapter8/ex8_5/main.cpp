/// Exercise 8.5:
/// Rewrite the previous program to store each word in a separate element.
///
#include <iostream>
#include <vector>
#include <fstream>
using namespace std;


std::vector<std::string> readFile(const std::string& filename)
{
    std::ifstream in(filename);

    if (!in)
    {
        cerr << "File was not opened" << endl;
    }


    std::vector<std::string> text;
    while (in)
    {
        string word;
        in >> word;
        text.push_back(word);
    }

    return text;
}



int main()
{
    std::vector<std::string> sv = readFile("test.txt");

    for ( string words : sv)
    {
        cout << words << endl;
    }
    return 0;
}

