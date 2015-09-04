// Exercise 5.5
// Using an if-else statement, write your own version fo the
// program ot generate the letter grade from a numeric grade

#include <iostream>
#include <vector>
using namespace std;

int main()
{
   const vector<string> gList  { "F", "E", "D", "C", "B", "A"};
   string grade;

   cout << "Enter points:" << endl;
   int points = 0;
   cin >> points;

   grade = (points < 60) ? gList[0]
         : (points == 100) ? gList[5]
         : (points % 10 > 7) ? gList[(points-50)/10] + "+"
         : (points % 10 < 3) ? gList[(points-50)/10] + "-"
         : gList[(points-50)/10];


//   (points == 100) ? grade = gList[5]
//                   : (points % 10 < 3 && grade !=  gList[0]) ? grade += '-'
//         :(points % 10 > 7 && grade != gList[0])
//         ? grade += '+'
//         : grade += "";




   cout << "Your grade is: " << grade << endl;

   return 0;
}

