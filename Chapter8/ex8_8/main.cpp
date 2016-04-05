/// Exercise 8.8: Revise the program from the previous exercise to append its output to its given file.
///  Run the program on the same output file at least twice to ensure that the data are preserved.

#include </Users/brianopedal/Downloads/GCC_4_7_0/7/Sales_data.h>
#include <iostream>
#include <fstream>

using namespace std;

int main( int argc, char* argv[])
{
    if (argc < 3)
        cout << "not enough arguments" << endl;


    ifstream rf(argv[1]);

    ofstream wf(argv[2], ofstream::app);

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
