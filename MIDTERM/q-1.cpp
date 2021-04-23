#include <iostream>
#include <fstream>
using namespace std;

int main()
{
  ifstream inStream("students.txt");
  if (inStream.fail()) {
    cout << "Input file opening failed.\n";
  }
  string studentName;
  int score1, score2, gradeCounter = 0;
  double total, average;

  for (int i=1; i<=10; i++)
  {
    inStream >> studentName >> score1 >> score2;
    cout << "Student name: " << studentName << endl;
    cout << "Score 1: " << score1 << "  Score 2: " << score2 << endl;

    total = score1+score2;
    average = total/2.0;
    cout << "Sum: " << total << "      Average: " << average << endl << endl;

    if (average > 80)
      gradeCounter++;
  }

  cout << "The total number of students who have an average > 80: " << gradeCounter << endl;
  inStream.close();
  return 0;
}
