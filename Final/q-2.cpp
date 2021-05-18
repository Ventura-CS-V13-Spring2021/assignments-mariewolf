#include <iostream>
#include <algorithm>
using namespace std;

int countRepeats(int [], int);
void printArr(int [], int);

int main() {
  unsigned seed = time(0); //random number seed
  srand(seed);
  int N = rand() % 20;
  int arr[N];

  for (int i=0; i<N; i++){
    arr[i] = (rand() % 20) - 5;
  }

  sort(arr, arr+N, greater<int>());;
  printArr(arr, N);


  return 0;
}

void printArr(int arr[], int N) {
  cout << "Printing array: " << endl;
  for (int i=0; i<N; i++) {
    cout << arr[i] << " ";
  }

  int prevElm = 0;

  cout << "\nDistinct elements: ";
  for (int i=0; i<N; i++) {
    if (prevElm != arr[i])
      cout << arr[i] << " ";
  }
}

int countRepeats(int numbers[], int N) {
  //count # of repeats

}
