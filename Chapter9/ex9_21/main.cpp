/// Exercise 9.20:
/// Write a program to copy elements from a list<int> into two deques.
/// The even-valued elements should go into one deque and the odd ones into the other.

#include <iostream>
#include <list>
#include <deque>
#include <string>
using namespace std;

const deque<int>
evenValues(list<int>& ilst, deque<int>& even)
{
    deque<int> odd;
    list<int>::const_iterator iter = ilst.begin();
    while (iter != ilst.end())
    {

        ((*iter % 2) == 0) ? even.push_back(*iter) : odd.push_back(*iter);
        ++iter;
    }

    return odd;
}


int main()
{
    list<int> a { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
    deque<int> even;

    deque<int> odd = evenValues(a, even);

    for (const auto& e : even)
    {
        cout << e << " ";
    }
    cout << endl;

    for (const auto& o : odd)
    {
        cout << o << " ";
    }
    cout << endl;


    return 0;
}

