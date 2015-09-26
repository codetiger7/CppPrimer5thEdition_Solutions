// Exercise 6.55

#include <iostream>
#include <vector>

using namespace std;


int adding(int, int);
int sub(int, int);
int multiply(int, int);
int divide(int, int);

int function(int, int);


int main()
{

    using F = decltype(function);

    std::vector<F*> vec;
    vec.push_back(adding);
    vec.push_back(sub);
    vec.push_back(multiply);
    vec.push_back(divide);


    // ex6_56
    int val1 = vec.begin()(4,4);

    cout << val1 << endl;

    return 0;
}


















int
adding(int a, int b)
{
    return a + b;
}

int
sub(int a, int b)
{
    return a - b;
}

int
multiply(int a, int b)
{
    return a * b;
}

int
divide(int a, int b)
{
    return a/b;
}
