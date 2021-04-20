#include <iostream>
#include <fstream>
using namespace std;

int main()
{
  ifstream inStream("MIDTERM/students.txt");
  string studentName;
  int score1, score2;
  int counter = 0, gradeCounter = 0;
  double total, average;

  for (int i=1; i<=10; i++)
  {
    if (counter <= 3) {
      inStream >> studentName >> score1 >> score2;
      cout << "Student name: " << studentName << endl;
      cout << "Score 1: " << score1 << "  Score 2: " << score2 << endl;
      total = score1+score2;
      average = total/2.0;
      cout << "Sum: " << total << "      Average: " << average << endl;
      counter++;
      cout << endl;
      if (average > 80)
        gradeCounter++;
    }
    if (counter = 3)
      counter = 0;
  }

  cout << "The total number of students who have an average > 80: " << gradeCounter << endl;
  return 0;

}