// Exercise 6.42

#include <iostream>
#include <string>
using namespace std;

string
make_plural(size_t ctr, const string& word, const string& ending = "s")
{
    return (ctr > 1) ? word + ending : word;
}

int main()
{
    string fail = "failure";
    string succ = "success";


    cout << "\n\n" << endl;
    cout << make_plural(1, fail) << endl;
    cout << make_plural(2, fail) << endl;


    // succ
    cout << make_plural(1, succ) << endl;
    cout << make_plural(3, succ, "es") << endl;



    return 0;
}

