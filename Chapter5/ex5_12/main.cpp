// Exercise 5.12

#include <iostream>

using namespace std;

int get_value()
{
   return 0;
}

int main()
{

  unsigned aCnt = 0;
  unsigned iCnt = 0;
  unsigned eCnt = 0;
  unsigned oCnt = 0;
  unsigned uCnt = 0;

  unsigned spaceCnt  = 0;
  unsigned tabCnt    = 0;
  unsigned nwlCnt    = 0;

  unsigned seqCnt = 0;

  char ch   = 0;
  char ckch = 0;

  while (cin >> noskipws >> ch)
  {

     // if ch is a vowel, increment the appropriate counter
     switch (ch)
     {
     case 'a':
     case 'A':
        ++aCnt;
        break;
     case 'e':
     case 'E':
        ++eCnt;
        break;
     case 'i':
     case 'I':
        ++iCnt;
        break;
     case 'O':
     case 'o':
        ++oCnt;
        break;
     case 'u':
     case 'U':
        ++uCnt;
        break;
     case ' ':
        ++spaceCnt;
        break;
     case '\t':
        ++tabCnt;
        break;
     case '\n':
        ++nwlCnt;
        break;
     case 'f':
     {
        cin >> ckch;
        if (ckch == 'f' || ckch == 'l' || ckch == 'i')
           ++seqCnt;
        else
           cin.putback(ckch);
     }
     default:
        break;
     }
  }

     // print results
     cout << "Num a:\t" << aCnt     << '\n'
          << "Num e:\t" << eCnt     << '\n'
          << "Num i:\t" << iCnt     << '\n'
          << "Num o:\t" << oCnt     << '\n'
          << "Num u:\t" << uCnt     << '\n'
          << "Spc  :\t" << spaceCnt << '\n'
          << "Tabs :\t" << tabCnt   << '\n'
          << "Nwl  :\t" << nwlCnt   << '\n'
          << "Seq  :\t" << seqCnt   << endl;



   return 0;
}

