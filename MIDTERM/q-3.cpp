#include <iostream>
#include <fstream>
using namespace std;

int getRdnum(void);
int findMin(int num1, int num2, int num3);
int findMax(int num1, int num2, int num3);
int getDifference(int num1, int num2, int num3);
int fileWrite(int difference);


int main()
{
  int num1 = getRdnum();
  int num2 = getRdnum();
  int num3 = getRdnum();



  return 0;
}

int findMin(int num1, int num2, int num3) {
  //insert code here
}

int findMax(int num1, int num2, int num3) {
  //insert code here
}

int getDifference(int num1, int num2, int num3) {
  //insert code here
}

int getRdnum(void){
  int num = rand() % 9 + 1;
  return num;
}


int fileWrite(int difference) {
  ofstream outStream("MIDTERM/q3numbers.txt", ios::app);

  if (outStream.fail()) {
    cout << "Output file opening failed.\n";
  }

  outStream << difference << endl;

  outStream.close();
}