#include <iostream>
#include <fstream>
using namespace std;

int getRdnum(void);
int findMin(int num1, int num2, int num3);
int findMax(int num1, int num2, int num3);
int getDifference(int minimum, int maximum);
int fileWrite(int difference);


int main()
{
  int num1 = getRdnum();
  int num2 = getRdnum();
  int num3 = getRdnum();
  int minimum = findMin(num1, num2, num3);
  int maximum = findMax(num1, num2, num3);
  int difference = getDifference(minimum, maximum);
  int fileWrite(difference);  

  return 0;
}

int findMin(int num1, int num2, int num3) {
	// In C++, there is no function min and max
	// You need to make a code to find min
	// and then return it.
  //got it, thank you! oops // I'm leaving. Good luck.
  //thanks for your help!
  int minimum;
  if ((num1 > num2) && (num1 > num3))
    minimum = num3;
  else if ((num1 > num2) && (num3 > num2))
    minimum = num2;
  else
    minimum = num1; 
  return minimum;
}

int findMax(int num1, int num2, int num3) {
  int maximum;
  if ((num1 > num2) && (num1 > num3))
    maximum = num1; 
  else if ((num2 > num3) && (num2 > num1))
    maximum = num2;
  else
    maximum = num3;
  return maximum;
}

int getDifference(int minimum, int maximum) {
  int difference = maximum - minimum;
  return difference;
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