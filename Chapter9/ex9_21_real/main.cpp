/// Exercise 9.21:
/// Explain how the loop from page 345 that used the return from insert
/// to add elements to a list would work if we inserted into a vector instead.

#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    vector<string> svec;
    vector<string>::iterator iter = svec.begin();

    string word;
    while (cin >> word)
    {
        iter = svec.insert(iter, word);
    }

    for (const auto& s : svec)
    {
        cout << s << " ";
    }
    cout << endl;

    return 0;
}

