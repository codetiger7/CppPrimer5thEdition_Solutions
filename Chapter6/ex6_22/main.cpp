#include <iostream>
#include <memory>

using namespace std;


void pSwap(int*& p1, int*& p2)
{
   int* temp = p1;
   p1 = p2;
   p2 = temp;
}



int main()
{
   int* l(new int(4));
   int* h(new int(293823));

   cout << *l << endl;
   cout << *h << endl;

   pSwap(l,h);


   cout << *l << endl;
   cout << *h << endl;

   return 0;
}

