// Exercise 6.27
#include <iostream>
#include <initializer_list>
using namespace std;


int sumList(initializer_list<int> il)
{
    int sum = 0;
    auto it = il.begin();

    while(it != il.end())
        sum += *it++;

    return sum;
}

int main()
{


    int sum = sumList({4,3,3,});

    cout << sum << endl;
    return 0;
}

