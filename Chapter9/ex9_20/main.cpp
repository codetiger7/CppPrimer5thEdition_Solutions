/// Exercise 9.19:
/// Rewrite the program from the previous exercise to use a list.
/// List the changes you needed to make.
///
/// Include list
/// Create list object
/// Create list const iterator

#include <iostream>
#include <list>
#include <string>

using namespace std;

int main()
{
    string word;
    list<string> sq;

    // read sequence
    while(cin >> word)
    {
        sq.push_back(word);
    }

    /// print elements in deque
    list<string>::const_iterator it = sq.begin();
    while ( it != sq.end())
    {
        cout <<*it << endl;
        ++it;
    }

    return 0;
}



