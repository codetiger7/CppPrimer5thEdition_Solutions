#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(int argc, char* argv[])
{
    for (auto i = 1; i != argc; ++i)
            cout << argv[i] << endl;

    // test

    return 0;
}

