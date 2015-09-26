#include <iostream>
#include <vector>
using namespace std;


int adding(int, int);
int sub(int, int);
int multiply(int, int);
int divide(int, int);

int ff(int, int);



int main()
{

    using F = decltype(ff);

    std::vector<F*> vec;
    vec.push_back(adding);
    vec.push_back(sub);
    vec.push_back(multiply);
    vec.push_back(divide);


    // ex6_56

    for ( auto r : vec)
        cout << r(2, 8) << endl;


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
