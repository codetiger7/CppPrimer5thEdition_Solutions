// Exercise 6.17b

#include <ctype.h>
#include <iostream>
#include <string>

using namespace std;

void toLowerCase(string& s)
{
   typedef string::size_type s_sz;
   for( s_sz i = 0; i != s.size(); ++i)
   {
      s[i] = tolower(s[i]);
   }
}

int main()
{
   cout << "Enter a word: " << endl;
   string word;
   cin >> word;

   toLowerCase(word);

   cout << "Lower case it is: \"" << word << "\"" << endl;


   return 0;
}

