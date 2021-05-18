#include <iostream>
using namespace std;

int getNumDiv(array i);

int main() {
  int arr[6] = [1, 2, 4, 6, 10, 24];
  num = getNumDiv(array arr);

  return 0;
}

int getNumDiv(array numbers) {
  //count # of factors
  int count = 0;
  int prevCount = 0;
  int maxNum;
  for (int i=0; i<length; i++) {
    count = 0;
    for (int j=2; j<numbers[i]; j++) {
      if ((numbers[i] % j) == 0) {
        count += 1;
      }
    }
    if (count > prevCount)
      maxNum = numbers[i];
  }
  return maxNum;
}
