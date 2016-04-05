/// Exercise 9.26:
/// Using the following definition of ia, copy ia into a vector and into a list.
/// Use the single-iterator form of erase to remove the elements with odd values from your list
/// and the even values from your vector.
/// int ia[] = { 0, 1, 1, 2, 3, 5, 8, 13, 21, 55, 89 };

#include <iostream>
#include <vector>
#include <list>
#include <iterator>

using namespace std;

int main()
{
    int ia[] = { 0, 1, 1, 2, 3, 5, 8, 13, 21, 55, 89 };

    vector<int> ivec(begin(ia), end(ia));
    list<int> ilist(begin(ia), end(ia));

    vector<int>::iterator vIter = ivec.begin();
    list<int>::iterator lIter   = ilist.begin();
    while(vIter != ivec.end())
    {
        if ((*vIter % 2) == 0)
        {
            vIter = ivec.erase(vIter);
        }
        else
        {
            ++vIter;
        }
    }

    while (lIter != ilist.end())
    {
        if ((*lIter % 2) != 0)
        {
            lIter = ilist.erase(lIter);
        }
        else
        {
            ++lIter;
        }
    }

    for (const auto& e : ilist )
    {
        cout << e << " ";
    }
    cout << endl;

    for (const auto& o : ivec)
    {
        cout << o << " ";
    }
    cout << endl;






    return 0;
}

