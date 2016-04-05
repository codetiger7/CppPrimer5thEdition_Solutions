#include <iostream>
#include <vector>
#include <typeinfo>
using namespace std;

int main()
{


    vector<int> v1;
    const vector<int> v2;

    // non-constant iterator
    auto it1 = v1.begin();

    // constant iterator
    auto it2 = v2.begin();

    // constant iterator
    auto it3 = v1.cbegin();

    // constant iterator
    auto it4 = v2.cbegin();





    return 0;
}

