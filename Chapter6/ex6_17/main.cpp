// Exercise 6.17
//

#include <ctype.h>
#include <iostream>
#include <string>
using namespace std;

bool containsCapital(const string& s)
{
   typedef string::size_type sz_s;
   for ( sz_s i = 0; i != s.size(); ++i)
   {
      if (isupper(s[i]))
         return true;
   }
   return false;
}



int main()
{
   string word;
   cout << "Enter word: " << endl;
   cin >> word;

   bool upper = containsCapital(word);

   if (upper)
      cout << "The word \"" << word  << "\" contains an uppercase letter" << endl;
   else
      cout << "No uppercase letter in: \"" << word << "\"." << endl;


   return 0;
}

