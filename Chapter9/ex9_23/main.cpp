/// Exercise 9.23:
/// In the first program in this section on page 346,
/// what would the values of val, val2, val3, and val4 be if c.size() is 1?

/**
// check that there are elements before dereferencing an iterator or calling front or back
if (!c.empty()) {
    // val and val2 are copies of the value of the first element in c
    auto val = *c.begin(), val2 = c.front();
    // val3 and val4 are copies of the of the last element in c
    auto last = c.end();
    auto val3 = *(--last); // can't decrement forward_list iterators
    auto val4 = c.back();  // not supported by forward_list
}
**/

#include <iostream>

using namespace std;

int main()
{
    cout << "Hello World!" << endl;
    return 0;
}

