/// Exercise 9.16:
/// Repeat the previous program,but compare elements in a
/// list<int> to a vector<int>.

#include <iostream>
#include <list>
#include <vector>

using namespace std;

bool
vectorIntsEqual(const list<int>& a, const vector<int>& b)
{
    bool equal = vector<int>(a.begin(), a.end()) == b ? true : false;
    return equal;
}

int main()
{

    list<int> a { 1,2,5,7,9};
    vector<int> b { 1,2,5,7,9};
    vector<int> c { 1,2,5,5 };

    cout << "Equal: " << boolalpha << vectorIntsEqual(a , b) << endl;
    cout << "Not equal: " << vectorIntsEqual(a , c) << endl;

    return 0;
}

