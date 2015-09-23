// Exercise 6.47

#include <iostream>
#include <vector>

using namespace std;

void vPrint(vector<int> v)
{
#ifndef NDEBUG
    cerr << "\n\n";
    cerr << "Size of vector is: " << v.size() << endl;
    cerr << "\n\n";
#endif

    if (v.size() >= 1)
    {
        cout << v[v.size()-1] << endl;
        v.resize(v.size()-1);
        vPrint(v);
    }
}



int main()
{

    vector<int> iv;
    iv.push_back(3);
    iv.push_back(4);
    iv.push_back(5);
    iv.push_back(6);

    vPrint(iv);
    return 0;
}

