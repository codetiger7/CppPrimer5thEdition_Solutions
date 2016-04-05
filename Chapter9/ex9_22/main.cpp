/// Exercise 9.22:
/// Assuming iv is a vector of ints, what is wrong with the following program?
/// How might you correct the problem(s)?

#include <vector>
#include <iostream>

using namespace std;

int main()
{

    vector<int> iv { 45, 33, 3, 4, 5 ,6};
    int some_val {3};

    vector<int>::iterator iter = iv.begin();
    vector<int>::size_type m = iv.size()/2;
    while (iter != iv.begin() + m)
    {
        if (*iter == some_val)
            iv.insert(iter, 2 * some_val);
        ++iter;
    }


    for ( const auto& i : iv)
    {
        cout << i << " ";
    }
    cout << endl;
}
