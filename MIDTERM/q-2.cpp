#include <iostream>
#include <fstream>
using namespace std;

int getRdnum(void);
int isGreater(int n);
int prevNumber = 51;

int main()
{
  int n = 10;
  int randomNumber;
//   ofstream outStream("numbers.txt", ios::app);
// fix the paht for the file.
  ofstream outStream("numbers.txt", ios::app);
// In your console,
// cd MIDTERM
// and then compile and run.
// This is the simple way to run, but if it is okay, just leave it.

//thanks, I didn't know I could do that. Fixed it



  if (outStream.fail()) {
    cout << "Output file opening failed.\n";
  }

  for (int i = 1; i <= n; i++) {
    randomNumber = getRdnum();
    if (isGreater(randomNumber))
      outStream << randomNumber << endl;
  }

  outStream.close();
  return 0;
}

int getRdnum(void){
  int num = rand() % 50 + 1;
  return num;
}

int isGreater(int n) {
  if (n > prevNumber) {
    prevNumber = n;
    return 1;
  }
  else {
    prevNumber = n;
    return 0;
  }
}