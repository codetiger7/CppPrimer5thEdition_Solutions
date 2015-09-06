// Exercise 5.22
// rewrite to elimina -3te goto
#include <iostream>

using namespace std;

int getn()
{
   return -3;
}

int main()
{
   for (int sz = getn(); sz <= 0;)
   {
      // ...
   }

   cout << "loop" << endl;
   return 0;
}

