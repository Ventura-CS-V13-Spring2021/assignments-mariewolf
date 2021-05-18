#include <iostream>
#include <algorithm>
using namespace std;

int countRepeats(int [], int);
void printArr(int [], int);

int main() {
  int N = 10;
  int arr[N] = {3,5,16,25,26,30};
  sort(arr, arr+N);
  printArr(arr, N);

  return 0;
}

void printArr(int arr[], int N) {
  for (int i=0; i<N; i++) {
    cout << arr[i] << " ";
  }
}

int countRepeats(int numbers[], int N) {
  //count # of repeats

}
