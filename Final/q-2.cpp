#include <iostream>
#include <algorithm>
using namespace std;

void countRepeats(int [], int);
void printArr(int [], int);

int main() {
  unsigned seed = time(0); //random number seed
  srand(seed);
  int N = rand() % 19 + 1;
  int arr[N];

  for (int i=0; i<N; i++){
    arr[i] = (rand() % 20) - 5;
  }

  sort(arr, arr+N, greater<int>());;
  printArr(arr, N);
  countRepeats(arr, N);

  return 0;
}

void printArr(int arr[], int N) {
  cout << "Printing array: " << endl;
  for (int i=0; i<N; i++) {
    cout << arr[i] << " ";
  }

  int prevElm = 0;

  cout << "\n\nDistinct elements: \n";
  for (int i=0; i<N; i++) {
    if (prevElm != arr[i])
      cout << arr[i] << " ";
    prevElm = arr[i];
  }
}

void countRepeats(int numbers[], int N) {
  //count # of repeats
  int count = 0, prevElm = 0;
  cout << "\n\nN    Count\n";
  for (int i=0; i<N; i++) {
    if (prevElm == numbers[i])
      continue;
    cout << numbers[i] << "    ";
    count = 0;
    for (int j=0; j<N; j++) {
      if (numbers[i] == numbers[j])
        count += 1;
    }
    cout << count << endl;
    prevElm = numbers[i];
  }
}
