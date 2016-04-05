/// Exercise 9.27:
/// Write a program to find and remove
/// the odd-valued elements in a forward_list<int>.

#include <iostream>
#include <forward_list>
using namespace std;

int main()
{
    forward_list<int> iflst { 1,2,3,3,1,4,5,6,5,6,7,7,7,8,8,7,3,9,1,10};

    auto current = iflst.begin();
    auto prevCurrent = iflst.before_begin();

    while (current != iflst.end())
    {
        if ((*current % 2) != 0)
        {
            current = iflst.erase_after(prevCurrent);
        }
        else
        {
            prevCurrent = current;
            ++current;
        }
    }

    for (const auto& fl : iflst)
    {
        cout << fl << " ";
    }
    cout << endl;

    return 0;
}

