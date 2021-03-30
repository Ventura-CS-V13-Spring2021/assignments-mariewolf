#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
  int rdNumber;
  int prevNumber = 100;
  unsigned seed = time(0);
  srand(seed);

  cout << "Answers to question 1: ";
  for (int i = 1; i <= 5; i++){
    rdNumber = rand() % 100;
    if (rdNumber > prevNumber)
      cout << rdNumber << " ";
    prevNumber = rdNumber;
  }
return 0;
}