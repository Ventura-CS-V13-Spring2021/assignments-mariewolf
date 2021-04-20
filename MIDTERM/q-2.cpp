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

  isGreater(51);

  for (int i = 1; i <= n; i++) {
    randomNumber = getRdnum();
    if (isGreater(randomNumber))
      outStream << randomNumber << endl;
  }

  outStream.close();
  return 0;
}

int getRdnum(void){
  unsigned seed = time(0);
  srand(seed);
  return rand()%50;
}

int isGreater(int n){
  if (n > prevNumber)
    prevNumber = n
    return 1;
  else
  prevNumber = n


}