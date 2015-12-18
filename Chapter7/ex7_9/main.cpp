#include <iostream>
#include "person.h"
using namespace std;

int main()
{
    Person brian;

    read(cin, brian);

    print(cout,brian);
    cout << endl;

    return 0;
}

