#include <iostream>
#include <string>
#include <initializer_list>

using namespace std;

void error_msg(initializer_list<string> il)
{
    for (auto beg = il.begin(); beg != il.end(); ++beg)
        cout << *beg << " ";
    cout << endl;
}




int main()
{
    string expected = "happy";
    string actual = "happy";

    if (expected != actual)
        error_msg({"functionX", expected, actual});
    else
        error_msg({"functionX", "okay"});



    return 0;
}

