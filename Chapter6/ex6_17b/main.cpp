// Exercise 6.17b


#include <ctype.h>
#include <iostream>
#include <string>
using namespace std;

void toLowerCase(string& s)
{
   string word = s;
   typedef string::size_type s_sz;
   for( s_sz i = 0; i != s.size(); ++i)
   {
      s[i] = tolower(word[i]);
   }
}

int main()
{
   cout << "Enter a word: " << endl;
   string word;
   cin >> word;

   cout << "Lower case it is: \"" << word << "\"" << endl;


   return 0;
}

