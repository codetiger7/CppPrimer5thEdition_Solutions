// Exercise 6.34

#include <iostream>
#include <vector>

using namespace std;


int factorial(int val)
{
    if (val > 1)
        return factorial(val-1) * val;

    return 1;
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

