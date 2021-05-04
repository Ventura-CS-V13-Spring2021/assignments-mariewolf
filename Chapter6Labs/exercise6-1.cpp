#include <iostream>
#include <fstream>
using namespace std;

const int N = 2;
struct Student {
  string name;
  int score[N];
};

void readFile();
void writeFile();

int main() {
  readFile();
  writeFile();
}

void readFile() {
  Student s;
  double sum, average;
  ifstream ifs("students.txt");
  if (ifs.fail()) {
    cout << "Output file opening failed.\n";
    exit(0);
  }

  while (ifs >> s.name) {
    sum = 0.0;
    cout << "Name: " << s.name << "\t";

    for (int i = 0; i < N; i++) {
      ifs >> s.score[i];
      sum += s.score[i];
      cout << "Score " << i + 1 << ":" << s.score[i] << "\t";
    }
    average = sum/N;
    cout << "Sum: " << sum << "\tAverage: " << average << endl;
  }
  ifs.close();
}

void writeFile() {
  fstream ofs;
  Student s;
  ofs.open("students.txt", ofstream::app);
  if (!ofs) {
    cerr << "File Open error";
    exit(0);
  }
  cout << "Enter the new student's name: ";
  cin >> s.name;
  for (int i = 0; i < N; i++) {
    cout << "Enter the score: ";
    cin >> s.score[i];
  }
  ofs << s.name << "\t";
  for (int i = 0; i < N; i++)
    ofs << s.score[i] << "\t";
  ofs << "\n";
  if (ofs)
    cout << "The new students information is written successfully";
  ofs.close();
}