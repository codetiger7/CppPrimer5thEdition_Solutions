// Exercise 6.4
// Write a function that interacts with the user,
// asking for a number and generating the facotrial of that number.
// Call this function from main.
#include <iostream>

using namespace std;

int fact(int value)
{
   int factorial = 1;
   while (value > 1)
      factorial *= value--;

   return factorial;
}

int main()
{

   while(true)
   {
      cout << "Enter a number to see the factorial of: " << endl;

      int val = 0;
      cin >> val;

      cout << "The facotrial of " << val << " is " << fact(val) << endl;



   }
   return 0;
}

