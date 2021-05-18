#include <iostream>
using namespace std;

int getNumDiv(int []);

int main() {
  int arr[6] = {1,2,4,6,10,24};
  int num = getNumDiv(arr);
  cout << "The number with the most factors is: " << num << endl;

  return 0;
}

int getNumDiv(int numbers[]) {
  //count # of factors
  int count = 0;
  int prevCount = 0;
  int maxNum = 0;

  for (int i=0; i<6; i++) {
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
