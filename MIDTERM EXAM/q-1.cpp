#include <iostream>
#include <fstream>
using namespace std;

int main()
{
  ifstream inStream("students.txt");
  string studentName;
  int score1, score2, counter = 0;

  while (!inStream.eof()) {
    cout << "Student name: " <<
    counter++;
    if (counter = 3) {
      counter = 0;
    }

  }
}