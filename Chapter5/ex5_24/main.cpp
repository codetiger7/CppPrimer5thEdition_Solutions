// Exercise 5.24

//

#include <iostream>
#include <stdexcept>
using namespace std;

int main()
{
   int first;
   int second;

   cout << "Enter two integers: " << endl;
   cin >> first >> second;


   if (!second)
      throw runtime_error("dividing by zero is undefined");

   cout << endl;
   cout << "Result: " << first / second << endl;



   return 0;
}

