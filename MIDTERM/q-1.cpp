#include <iostream>
#include <fstream>
using namespace std;

int main()
{
  ifstream inStream("students.txt");
  string studentName;
  int score1, score2, counter = 0;

  while (!inStream.eof()) {
    inStream >> studentName >> score1 >> score2;
    cout << "Student name: " << studentName << endl;
    cout << "Score 1: " << score1 << "Score 2: " << score2 << endl;
    counter++;
    //if (counter = 3) {
    //  counter = 0;
    }

  return 0;

}