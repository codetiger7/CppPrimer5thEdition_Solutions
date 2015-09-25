// Exercise 6.51

#include <iostream>

using namespace std;


void f();
void f(int);
void f(int, int);
void f(double, double = 3.14);

int main()
{

    cout << "\n\n" << endl;

    // a) illegal call and it is ambiguous
//    f(2.56, 42);

    // b) the call best matches - void f(int)
    f(42);

    // c) the call best matches - void f(int, int)
    f(42, 0);

    // d) best match - void f(double, double)
    f(2.56, 3.14);


    return 0;
}


void f()
{
    cout << "f => no argument" << endl;
}

void f(int a)
{
    cout << "f => 1 int argument" << endl;
}

void f(int a, int b)
{
    cout << "f => 2 int arguments" << endl;
}

void f(double a, double b)
{
    cout << "f => 2 double arguments (1 default)" << endl;
}

