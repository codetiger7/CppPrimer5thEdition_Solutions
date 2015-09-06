// Exercise 5.23
// Write a program that reads two integers from the standard input
// and prints the result of dividing the first number by the second.

#include <iostream>
using namespace std;

int main()
{
   int first;
   int second;

   cout << "Enter two integers: " << endl;
   cin >> first >> second;

   cout << endl;
   cout << "Result: " << first/second << endl;



   return 0;
}

