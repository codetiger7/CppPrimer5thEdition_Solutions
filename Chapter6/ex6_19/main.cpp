#include <iostream>
#include <string>
#include <vector>
using namespace std;

double calc(double val)
{
   return val + 2;
}

int count(const string& s, char c)
{
   cout << s << endl;
   cout << c << endl;
   return 1;
}

int sum(vector<int>::iterator b, vector<int>::iterator e, int v)
{
   if (b == e)
      return 3;

   return v + v;
}

//vector<int> vec(10);


int main()
{
   // a)
   // cout << calc(23.4, 55.1) << endl;

   // b)
   cout << count("abcda", 'a') << endl;

   // c)
   cout << calc(66) << endl;

   // d)
   vector<int> vec;
   cout << sum(vec.begin(), vec.end(), 3.8) << endl;

   return 0;
}

