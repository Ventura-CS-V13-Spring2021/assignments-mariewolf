#include <iostream>
#include <fstream>
using namespace std;

int main()
{
  ifstream inStream("MIDTERM/students.txt");
  string studentName;
  int score1, score2;
  int counter = 0, gradeCounter = 0;
  double total;

  for (int i=1; i<=10; i++)
  {
    if (counter <= 3) {
      inStream >> studentName >> score1 >> score2;
      cout << "Student name: " << studentName << endl;
      cout << "Score 1: " << score1 << "  Score 2: " << score2 << endl;
      total = score1+score2;
      cout << "Sum: " << total << "      Average: " << total/2.0 << endl;
      counter++;
      cout << endl;
    }
    if (counter = 3)
      counter = 0;
  }

  return 0;

}