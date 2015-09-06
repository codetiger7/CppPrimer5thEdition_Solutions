// Exercise 5.19
// Write a program that uses a *do while* loop to repetively request two *string*s from the user
// and report which *string* is less than the other.

#include <iostream>
#include <string>
using namespace std;

int main()
{

   do
   {
      cout << "Enter two strings: " << endl;
      string first;
      string second;
      cin >> first >> second;

      if (first > second)
      {
         cout << first << " :is more" << endl;
         cout << second << " :is less" << endl;
      }
      else if (second > first)
      {
         cout << second << " :is more" << endl;
         cout << first << " :is less" << endl;
      }
      else
      {
         cout << first << endl;
         cout << second << endl;
         cout << "Strings are equal" << endl;
      }



   } while (true);

   return 0;
}

