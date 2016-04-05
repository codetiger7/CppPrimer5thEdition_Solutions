/// Exercise 9.24:
/// Write a program that fetches the first element in a vector using at,
/// the subscript operator, front, and begin. Test your program on an empty vector.


#include <iostream>
#include <vector>

using namespace std;

int main()
{

//    vector<int> ivector { 10, 9, 8,7, 7,6,5,4,3,2,1,23,56};
    vector<int> ivector;


    if (!ivector.empty())
    {
        /// fetch first element using:
        cout << ivector.at(0) << endl;      // at
        cout << ivector[0] << endl;         // subscript operator
        cout << ivector.front() << endl;    // front
        cout << *ivector.begin() << endl;   // begin
    }

    return 0;
}

