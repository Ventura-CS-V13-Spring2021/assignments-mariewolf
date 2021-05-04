#include <iostream>
#include <algorithm>
#include "IntegerArray.hpp"
using namespace std;

int IntegerArray::getLength(void) const {
  //retrieve length
  return length;
}
void IntegerArray::sortArray(int flag) {
  //sort arrays based on flag
  if (flag == 0)
    sort(numbers, numbers+length);
  else
    sort(numbers, numbers+length, greater<int>());
}
void IntegerArray::fillUp(void) {
  //fill array
  srand(time(0));
  for(int i=0;i<N; i++)
    numbers[i] = rand() % 100;
  length = N;
}
int IntegerArray::getPrimenumbers(void) const {
  //count # of primes
  bool primeFlag = false;
  int count = 0;
  for (int i=0; i<length; i++) {
    primeFlag = false;
    for (int j=2; j<numbers[i]; j++) {
      if ((numbers[i] % j) == 0) {
        primeFlag = true;
        break;
      }
    }
    if (primeFlag == false)
      count += 1;
  }
  return count;

}
void IntegerArray::printAll(void) const {
  //print array
  for (int i=0; i<length; i++)
    cout << numbers[i] << " ";
}
