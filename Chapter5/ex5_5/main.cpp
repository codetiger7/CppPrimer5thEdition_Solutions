// Exercise 5.5
// Using an if-else statement, write your own version fo the
// program ot generate the letter grade from a numeric grade

#include <iostream>
#include <vector>
using namespace std;

int main()
{
   const vector<char> gradeList  { 'F', 'E', 'D', 'C', 'B', 'A'};
   string lettergrade;
   int passingGrade = 60;

   cout << "Enter grade:" << endl;

   int pointsAchieved = 0;

   cin >> pointsAchieved;

   if ( pointsAchieved < passingGrade)
   {
      lettergrade =  gradeList[0];
   }
   else
   {
      lettergrade =  gradeList[ (pointsAchieved-50) / 10];

      if (lettergrade == "A")
         lettergrade += "++";
      else if(pointsAchieved % 10 > 7)
         lettergrade += '+';
      else if (pointsAchieved % 10 < 3 )
         lettergrade += '-';
   }


   cout << "Your grade is: " << lettergrade << endl;

   return 0;
}

