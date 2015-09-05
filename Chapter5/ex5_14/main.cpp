// Exercise 5.14
// program is to read strings from standard input
// look for duplicated words
// find where a word is immediately followed by itself
// keep track of the most time a single repetition happens
// also keep track of the word
// print the number of duplicates
// or message saying no word was repeated
#include <iostream>
#include <string>

using namespace std;

int main()
{
   string word;
   string repeatedWord;
   unsigned repeatedCnt = 1;
   unsigned recordCnt  = 1;
   string recordWord;

   cin >> repeatedWord;

   while (cin >> word)
   {

      if ( word == repeatedWord)
      {
         ++repeatedCnt;
      }
      else
      {
         // check for new record count
         if (repeatedCnt > recordCnt)
         {
            // update with the new record word and count
            recordCnt = repeatedCnt;
            recordWord = repeatedWord;
         }

         // start checking for next repeated word
         repeatedWord = word;
         // start counting again
         repeatedCnt = 1;
      }
   }


   // print record if any
   if (recordCnt == 1)
      cout << "No word was repeated" << endl;
   else
   {
      cout << "The word: \"" << recordWord
           << "\" was repeated: "
           << recordCnt << " times " << endl;
   }


   return 0;
}

