// Exercise 6.3
// Write and test your own version of fact

#include <iostream>

using namespace std;


int fact(int val)
{
   int ret = 1;
   while (val > 1)
      ret *= val--;

   return ret;
}


int main()
{

   int a = fact(5);
   int b = fact(6);
   int c = fact(7);


   cout << "5! is: " << a << endl;
   cout << "6! is: " << b << endl;
   cout << "7! is: " << c << endl;

   return 0;
}

