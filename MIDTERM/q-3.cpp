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

}

int fileWrite(int difference) {
  ofstream outStream("MIDTERM/q3numbers.txt", ios::app);

  if (outStream.fail()) {
    cout << "Output file opening failed.\n";
  }
}