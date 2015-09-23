// Exercise 6.46

#include <iostream>
#include <string>
using namespace std;


constexpr bool
isShorter(const string& s1, const string& s2)
{
    return s1.size() < s2.size();
}


int main()
{
    const string a = "hi";
    const string b = "hello";

    cout << isShorter(a, b) << endl;

    return 0;
}

