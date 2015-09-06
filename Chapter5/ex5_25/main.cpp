// Exercise 5.25

//

#include <iostream>
#include <stdexcept>
using namespace std;

int main()
{

   while (true)
   {
      int first = 0;
      int second = 0;

      cout << "Enter two integers: " << endl;
      cin >> first >> second;

      try
      {

         if (!second)
            throw runtime_error("dividing by zero is undefined");

         cout << endl;
         cout << "Result: " << first / second << endl;
      }
      catch(runtime_error err)
      {
         cout << err.what() << "\nTry again? Enter y/n:" << endl;
         char c;
         cin >> c;
         if (!cin || c == 'n')
            break;
      }

   }



   return 0;
}

