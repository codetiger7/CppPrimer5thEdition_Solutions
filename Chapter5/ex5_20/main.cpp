// Exercise 5.20
// read word sequence
// discover repeated words
#include <iostream>
#include <string>
using namespace std;

int main()
{
   string word;
   string previousWord;
   bool repeated = false;

   cout << "Enter words: " << endl;
   cin >> previousWord;

   while (cin >> word)
   {
      if(previousWord == word)
      {
         repeated = true;
         break;
      }
      else
      {
         previousWord = word;
      }
   }


   if (repeated)
   {
      cout << "Repeated word: " << previousWord << endl;
   }
   else
      cout << "No word was repeated" << endl;

   return 0;
}

