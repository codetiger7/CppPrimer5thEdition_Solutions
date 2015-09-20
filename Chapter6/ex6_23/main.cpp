// Exercise 6.23
#include <iostream>

using namespace std;

// marker to specify exent of array
void print(const int* ip);

// lib conv
void print(const int* beg, const int* end);

// size param
void print(const int ia[], size_t size);

// array param and const
// array ref parameters
void print(int (&arr)[2]);


// passing a multidimensional array
void print(int (*matrix)[10], int rowSize)
{
    cout << "multidimensional" << endl;
}

int main()
{
    int i = 0;
    int j[2] = {0, 1};

    // first print version
    print(&i);
    print(j);
    print(j+1);


    //
    cout << "\nTest2:\n\n";
    print(begin(j), end(j));


    // explicitly passing a size parameter
    cout << "test 3\n" << endl;
    print(&i, 1);
    print(j, 2);

    // array ref param
    print(j);







    return 0;
}


void print(int (&arr)[2])
{
    for (auto elem : arr)
        cout << elem << endl;

    cout << "yeah" << endl;

}


void print(const int ia[], size_t size)
{
    for (size_t i = 0; i != size; ++i)
        cout << ia[i] << endl;
}


void print(const int* beg, const int* end)
{
    // print every element starting at beg up to but not including end
    while (beg != end)
        cout << *beg++ << endl;
}





void print(const int* txt)
{
    cout << *txt << endl;
}



//void print(const int* ip)
//{
//    if (ip)
//        while (*ip)
//            cout << *ip++ << endl;
//}
