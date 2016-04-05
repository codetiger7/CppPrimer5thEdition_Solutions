/// Exercise 8.6:
/// Rewrite the bookstore program from § 7.1.1 (p. 256) to read its transactions from a file.
/// Pass the name of the file as an argument to main (§ 6.2.5, p. 218).

#include </Users/brianopedal/Downloads/GCC_4_7_0/7/Sales_data.h>
#include <iostream>
#include <fstream>
using namespace std;

int main( int argc, char* argv[])
{
    if (argc < 2)
        cout << "not enough arguments" << endl;


    ifstream rf(argv[1]);


    Sales_data total;

    if (read(rf, total))
    {
        Sales_data trans;
        while (read(rf, trans))
        {
            if (total.isbn() == trans.isbn())
            {
                total.combine(trans);
            }
            else
            {
                print(cout, total) << endl;
                total = trans;
            }
        }

        print(cout, total) << endl;
    }
    else
    {
        cerr << "No data!!?" << endl;
    }

}
