/// Exercise 9.5: Rewrite the previous program to return an iterator to the requested element.
/// Note that the program must handle the case where the element is not found.

#include <iostream>
#include <vector>
using namespace std;


vector<int>::const_iterator
valueFinder( vector<int>::const_iterator begin, vector<int>::const_iterator end, int value)
{
    while (begin != end)
    {
        if (*begin == value)
        {
            return begin;
        }

        ++begin;
    }

    return end;
}

int main()
{
    vector<int> ivec { 4 , 5, 3, 29, 50, 23 };

    cout << "First search: " << endl;

    if (valueFinder(ivec.begin(), ivec.end(), 8) == ivec.end())
    {
        cout << "value : " << 8 << " not found" << endl;
    }
    else
    {
        cout << "value found" << endl;
    }

    cout << "\nSecond search: " << endl;

    if (valueFinder(ivec.begin(), ivec.end(), 29) == ivec.end())
    {
        cout << "value : " << 8 << " not found" << endl;
    }
    else
    {
        cout << "value found: " << 29 <<  endl;
    }

    return 0;
}

