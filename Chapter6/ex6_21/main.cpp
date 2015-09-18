#include <iostream>

using namespace std;


int
largest( const int val1, const int* pVal2 )
{
  return (val1 > *pVal2) ? val1 : *pVal2;
}


int main()
{
   cout << "\n\n\n" << endl;

   int a = 10;
   int b = 30;
   int* pb = &b;
   int* pa = &a;

   cout << "Largest is: " <<  largest(a, pb) << endl;
   cout << endl;

   cout << "Largest is: " << largest(b, pa) << endl;

   return 0;
}

