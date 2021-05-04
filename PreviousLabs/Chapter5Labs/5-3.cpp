#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void makearray(double n[], int N);
void printarray(double n[], int N);
void findminmax(double n[], int N);
int outOfOrder(double n[], int N);

int main() {
  const int N = 10;
  double numbers[N];
  
  makearray(numbers, N);
  printarray(numbers, N);
  findminmax(numbers, N);
  int inOrderStatus = outOfOrder(numbers, N); 
  cout << "The order status is: " << inOrderStatus << endl;

  return 0;
}
void makearray(double n[], int N) {
  srand(time(0));
  for (int i=0; i<N; i++)
    n[i] = ((rand() % 10000)/100.0);
}
void printarray(double n[], int N) {
  for (int i=0; i<N; i++)
    cout << n[i] << " ";
  cout << endl;
}
void findminmax(double n[], int N) {
  double maxNumber = -1, minNumber = 100;
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
int outOfOrder(double n[], int N) {
  double prevNumber = 0;
  int status = -1;
  for (int i=0; i<N; i++) {
    if (prevNumber <= n[i])
      prevNumber = n[i];
    else {
      status = i;
      break;
    }
  }
  return status;
}
