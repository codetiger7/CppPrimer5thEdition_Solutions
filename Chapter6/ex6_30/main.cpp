// Exercise 6.30
#include <iostream>
#include <string>
using namespace std;

// incorrect return values, this code will not compile
bool str_subrange(const string& str1, const string& str2)
{
    // same sizes: return normal equality test
    if (str1.size() == str2.size())
        return str1 == str2;    // ok returns bool

    //  find the size of the smaller string; conditional operator
    auto size = (str1.size() < str2.size())
                ? str1.size() : str2.size();

    // look at each element up to the size of the smaller string
    for (decltype(size) i = 0; i != size; ++i)
    {
        if (str1[i] != str2[i])
            return; // error
    }

    // error #2
}



int main()
{

    return 0;
}

