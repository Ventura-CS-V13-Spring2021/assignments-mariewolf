#include <iostream>
#include "IntegerArray.hpp"
using namespace std;

int main()
{
  IntegerArray N;

  N.fillUp();
  N.printAll();
  cout << "\nCurrent length is " << N.getLength() << endl;

  cout << "\nAfter sorting with ascending order: \n";
  N.sortArray(0);
  N.printAll();

  cout << "\n\nAfter sorting with descending order: \n";
  N.sortArray(1);
  N.printAll();

  cout << "\n\nThe number of prime numbers: " << N.getPrimenumbers() << endl;
}

//code mostly copied from question prompt
