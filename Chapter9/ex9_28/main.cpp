/// Exercise 9.28:
/// Write a function that takes a forward_list<string> and two additional string arguments.
/// The function should find the first string and insert the second immediately following the first.
/// If the first string is not found, then insert the second string at the end of the list.

#include <forward_list>
#include <iostream>
#include <string>

using namespace std;


void
followInsert(forward_list<string>& fwl, const string& find, const string& store)
{
    if (!fwl.empty())
    {
        auto curr = fwl.begin();
        auto prev = fwl.before_begin();
        bool found = false;

        while( curr != fwl.end() && found == false)
        {
            if (*curr == find)
            {
                found = true;
                fwl.insert_after(curr, store);
            }
            else
            {
                prev = curr;
                ++curr;
            }
        }

        if (!found)
        {
            fwl.insert_after(prev, store);
        }
    }

}

int main()
{
    forward_list<string> fws {"test", "two", "three", "fourth", "fifth", "six", "seven", "eight", "nine", "ten"};
    string du {"wild"};
    string test {"craaazy"};

    followInsert(fws, du, test);

    for (const auto& i : fws)
    {
        cout << i << " ";
    }
    cout << endl;



    return 0;
}

