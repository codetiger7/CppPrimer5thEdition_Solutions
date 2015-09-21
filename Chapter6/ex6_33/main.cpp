// Exercise 6.33

#include <iostream>
#include <vector>

using namespace std;

void vPrint(vector<int> v)
{
    if (v.size() >= 1)
    {
        cout << v[v.size()-1] << endl;
        size_t n = v.size()-1;
        v.resize(n);

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

