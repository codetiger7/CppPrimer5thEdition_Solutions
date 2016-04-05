/// Exercise 9.14:
/// Write a program to assign the elements
/// from a list of char* pointers to C-style character strings
/// to a vector of strings.

#include <iostream>
#include <list>
#include <string>
#include <vector>

using namespace std;

int main()
{
    list<const char* > lcp { "first", "second", "third"};

    vector<string> vs;

    vs.assign(lcp.cbegin(), lcp.cend());

    for (const auto& t : vs)
    {
        cout << t << " ";
    }
    cout << endl;

    return 0;
}

