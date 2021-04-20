#include <iostream>
#include <fstream>
#include <ctime>
using namespace std;

int getRdnum(void);
int isGreater(int n);

int main()
{
  int n = 10;
  int randomNumber;
  ofstream outStream("MIDTERM/numbers.txt");

  if (outStream.fail()) {
    cout << "Output file opening failed.\n";
  }

  for (int i = 1; i <= n; i++) {
    randomNumber = getRdnum();
    if (isGreater(randomNumber))
      outStream << randomNumber << endl;
    cout << randomNumber << endl;
  }

  outStream.close();
  return 0;
}

int getRdnum(void){
  int num = rand() % 50 + 1;
  return num;
}

int isGreater(int n){
  if (prevNumber = 51)
    prevNumber = n;
  if (n > prevNumber) {
    prevNumber = n;
    return 1;
  }
  else {
    prevNumber = n;
    return 0;
  }
}