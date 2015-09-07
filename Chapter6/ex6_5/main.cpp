// Exercise 6.5
// Write a function to return the absolute value of it's argument.

#include <iostream>
using namespace std;


int absolute(int val)
{
   if (val < 0)
      val *= -1;

   return val;
}

int main()
{
   while(true)
   {
      cout << "Enter number to see its absolute value: " << endl;
      int num;
      cin >> num;
      cout << "Absolute value of " << num << " is " << absolute(num) << endl;
      cout << endl;
   }

   return 0;
}

