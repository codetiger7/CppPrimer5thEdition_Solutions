/// Exercise 9:18
/// Write a program to read a sequence of of *strings*
/// from the standard input into a deque. Use iterators to
/// write a loop to print the elements in the deque


#include <iostream>
#include <string>
#include <deque>
using namespace std;

int main()
{
    string word;
    deque<string> sq;

    // read sequence
    while(cin >> word)
    {
        sq.push_back(word);
    }

    /// print elements in deque
    deque<string>::const_iterator it = sq.begin();
    while ( it != sq.end())
    {
        cout <<*it << endl;
        ++it;
    }
    return 0;
}

