/// Exercise 9.13:
/// How would you initialize a vector<double> from a list<int>?
/// From a vector<int>? Write code to check your answers.

#include <iostream>
#include <list>
#include <vector>
using namespace std;

int main()
{

    /// vector double, from list int
    list<int> li { 3,4,7,9,1,2,4,5,6,7};
    vector<double> vd;


    for (auto& i : li)
    {
        vd.push_back(static_cast<double>(i));
    }

    for(const auto& i : vd)
    {
        cout << i << " ";
    }
    cout << endl;
    cout << endl;

    vector<int> aa { 987, 765, 543, 321 };
    vector<double> bb;

    for ( const auto& m : aa)
    {
        bb.push_back(static_cast<double>(m));
    }

    for (const auto& n : bb)
    {
        cout << n << " ";
    }
    cout << endl;


    return 0;

}

