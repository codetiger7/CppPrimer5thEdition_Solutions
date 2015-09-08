// Exercise 6.7
// Write a function that returns 0 when it is first called
// and then generates numbers in sequence each time it is called again.

#include <iostream>
using namespace std;

int increaseNumbers()
{
   int static number = 0;

   return number++;
}


int main()
{

   for (int i = 0; i != 7; ++i)
   {
      cout << increaseNumbers() << endl;
      cout << endl;
   }
   return 0;
}

