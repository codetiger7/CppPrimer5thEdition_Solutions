/// Exercise 9.31:
/// The program on page 354 to remove even-valued elements and duplicate odd ones
///  will not work on a list or forward_list.
/// Why? Revise the program so that it works on these types as well.

#include <iostream>
#include <forward_list>
using namespace std;

int main()
{
    // silly loop to remove even-valued elements and insert a duplicate of odd-valued elements
    forward_list<int> vi { 0,1,2,3,4,5,6,7,8,9,0};
    auto iter       = vi.begin();
    auto preIter    = vi.before_begin();

    while (iter != vi.end())
    {

        if (*iter % 2)
        {
            cout << "test" << endl;
            ++preIter;
            iter = vi.insert_after(iter,*iter);
            ++preIter;
            ++iter;
        }
        else
        {
            iter = vi.erase_after(preIter);
        }
    }


    for (const auto& v : vi)
    {
        cout << v << " ";
    }
    cout << endl;
    return 0;
}

