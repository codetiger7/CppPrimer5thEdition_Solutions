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

  char ch;
  while (cin >> ch)
  {
     if (ch == 'a')
        ++aCnt;
     if (ch == 'e')
        ++eCnt;
     if (ch == 'i')
        ++iCnt;
     if (ch == 'o')
        ++oCnt;
     if (ch == 'u')
        ++uCnt;
   }

     // print results
     cout << "Num a:\t" << aCnt << '\n'
          << "Num e:\t" << eCnt << '\n'
          << "Num i:\t" << iCnt << '\n'
          << "Num o:\t" << oCnt << '\n'
          << "Num u:\t" << uCnt << endl;



   return 0;
}
