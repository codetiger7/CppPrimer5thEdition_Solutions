/// Exercise 8.7: Revise the bookstore program from the previous section to write its output to a file.
///  Pass the name of that file as a second argument to main.
#include </Users/brianopedal/Downloads/GCC_4_7_0/7/Sales_data.h>
#include <iostream>
#include <fstream>

using namespace std;

int main( int argc, char* argv[])
{
    if (argc < 3)
        cout << "not enough arguments" << endl;


    ifstream rf(argv[1]);

    ofstream wf(argv[2]);

    if (!wf)
        cout << "output file not opened" << endl;


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
                print(wf, total) << endl;
                total = trans;
            }
        }

        print(wf, total) << endl;
    }
    else
    {
        cerr << "No data!!?" << endl;
    }

}
