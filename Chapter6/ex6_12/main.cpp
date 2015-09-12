// Exercise 6.12

#include <iostream>
using namespace std;

void swapInts(int& a, int& b)
{
   int temp = a;
   a = b;
   b = temp;
}

int main()
{
   int low = 12;
   int high = 4549;

   cout << "low: " << low << endl;
   cout << "high: " << high << endl;

   cout << "swap:" << endl;

   swapInts(low, high);

   cout << "low: " << low << endl;
   cout << "high: " << high << endl;


   return 0;
}

