/// Exercise 9.15:
/// Write a program to determine whether two vector<int>s are equal.

#include <iostream>
#include <vector>

using namespace std;

bool
vectorIntsEqual(const vector<int>& a, const vector<int>& b)
{
    if( a == b)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{

    vector<int> a { 1,2,5,7,9};
    vector<int> b { 1,2,5,7,9};
    vector<int> c { 1,2,5,5 };

    cout << "Equal: " << boolalpha << vectorIntsEqual(a , b) << endl;
    cout << "Not equal: " << vectorIntsEqual(b , c) << endl;

    return 0;
}

