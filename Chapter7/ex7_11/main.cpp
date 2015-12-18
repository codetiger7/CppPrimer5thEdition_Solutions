#include <iostream>
#include "sales_data.h"
using namespace std;

int main()
{
    Sales_data one;
    cout << one.bookNo_ << one.unitsSold_ << endl;

    Sales_data two("42");
    cout << "two " << two.isbn() << endl;


    Sales_data three("42", 4, 10);
    cout << "three: ";
    print(cout, three);
    cout << endl;

    Sales_data four(cin);
    cout << "four: ";
    print(cout, four);
    cout << endl;


    return 0;
}

