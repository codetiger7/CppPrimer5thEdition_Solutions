/// Exercise 9.4: Write a function that takes a pair of iterators to a vector<int> and an int value.
/// Look for that value in the range and return a bool indicating whether it was found.

#include <iostream>
#include <vector>
using namespace std;


bool
valueFinder( vector<int>::const_iterator begin, vector<int>::const_iterator end, int value)
{
    bool valueFound = false;

    while (begin != end)
    {
        if (*begin == value)
        {
            valueFound = true;
            return valueFound;
        }

        ++begin;
    }

    return valueFound;
}

int main()
{
    vector<int> ivec { 4 , 5, 3, 29, 50, 23 };

    cout << "First search: " << endl;
    cout << std::boolalpha << valueFinder(ivec.begin(), ivec.end(), 8)<< endl;


    cout << "\nSecond search: " << endl;
    cout << std::boolalpha << valueFinder(ivec.begin(), ivec.end(), 50)<< endl;

    return 0;
}

