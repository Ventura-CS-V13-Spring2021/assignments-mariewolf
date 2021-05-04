#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void makearray(int n[], int N);
void printarray(int n[], int N);
void findminmax(int n[], int N);

int main() {
  const int N = 10;
  int numbers[N];
  
  makearray(numbers, N);
  printarray(numbers, N);
  findminmax(numbers, N);

  return 0;
}
void makearray(int n[], int N) {
  srand(time(0));
  for (int i=0; i<N; i++)
    n[i] = (rand() % 100);
}
void printarray(int n[], int N) {
  for (int i=0; i<N; i++)
    cout << n[i] << " ";
  cout << endl;
}
void findminmax(int n[], int N) {
  int maxNumber = -1, minNumber = 100;
  for (int i=0; i<N; i++) {
    if (n[i] > maxNumber)
      maxNumber = n[i];
  }
  for (int i=0; i<N; i++) {
    if (n[i] < minNumber)
      minNumber = n[i];
  }
  cout << "The maximum of the numbers is: " << maxNumber << endl;
  cout << "The minimum of the numbers is: " << minNumber << endl;
}
