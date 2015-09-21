// Exercise 6.34

#include <iostream>

using namespace std;


int factorial(int val)
{
    if (val != 0)
        return factorial(val-1) * val;

    return 1;
}


int main()
{


    return 0;
}

