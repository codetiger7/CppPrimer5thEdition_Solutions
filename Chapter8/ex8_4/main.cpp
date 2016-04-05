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


    std::vector<std::string> s;
    while (in)
    {
        string sentence;
        getline(in, sentence);
        s.push_back(sentence);
    }

    return s;
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

