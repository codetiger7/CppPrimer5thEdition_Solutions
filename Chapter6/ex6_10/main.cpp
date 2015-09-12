// Exercise 6.10
#include <iostream>

using namespace std;


void numSwap(int* low, int* high)
{
   int temp = *low;
   *low = *high;
   *high = temp;
}

int main()
{
   int low = -3;
   int high = 78349;

   cout << "low = " << low << endl;
   cout << "high = " << high << endl;

   numSwap(&low, &high);

   cout << "swapped: " << endl;

   cout << "low = " << low << endl;
   cout << "high = " << high << endl;


   return 0;
}

