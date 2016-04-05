/// Exercise 9.11: Show an example of each of the six ways to create and initialize a vector.
/// Explain what values each vector contains.

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v1;                         // default initialization no values
                                            // no values

    vector<int> v2 { 1,2,3,4,5,6,7,8,9};    // list initialization
                                            // values in list

    vector<int> v3(v2);                     // copy constructor initialization
                                            // values in v2

    vector<int> v4 = v3;                    // assignment initialization
                                            // values in v3

    vector<int> v5(10, -3);                 // constructor initialization
                                            // -3

    vector<int> v7(3);                      // constructor init
                                            // default initialized

    vector<int> v6(v4.begin(), v4.end());   // iterator initialization
                                            // values in v4

    return 0;
}

