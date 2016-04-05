/// Exercise 8.10: Write a program to store each line from a file in a vector<string>.
/// Now use an istringstream to read each element from the vector a word at a time.

#include <iostream>
#include <sstream>
#include <fstream>
#include <vector>

using namespace std;


int main()
{
    vector<string> svec;
    ifstream infile("text.txt");

    if (!infile)
    {
        cerr << "File not opened" << endl;
    }


    string line;
    while(getline(infile, line))
    {
        svec.push_back(line);
    }



    for( auto& s : svec)
    {
        istringstream is(s);
        string word;
        while(is >> word)
        {
            cout << word << endl;
        }

    }




}
