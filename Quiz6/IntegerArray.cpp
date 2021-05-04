#include <iostream>
#include <algorithm>
#include "IntegerArray.hpp"
using namespace std;

int getLength(void) const {
  //retrieve length
  return length;
}
void sortArray(int flag) {
  //sort array
}
void fillUp(void); {
  //fill array
  srand(time(0));
  for(int i=0;i<N; i++)
    numbers[i] = rand() % 100;
  length = N;
}
void getPrimenumber(void) const {
  //count # of primes
  bool primeFlag = false;
  int count = 0;
  for (int i=0; i<length; i++) {
    for (int j=2; j<numbers[i]; j++) {
      if ((numbers[i] % j) == 0) {
        primeFlag = true;
        break;
      }
      else {
        primeFlag = false;
      }
    }
  }


}
void printAll(void) const {
  //print array
  for (int i=0; i<length; i++)
    cout << numbers[i] << " ";
}