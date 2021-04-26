#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
  const int N = 10;
  int numbers[N];
  double sum = 0, average;

  srand(time(0));

  for (int i=0; i<N; i++) {
    numbers[i] = (rand() % 100);
  }
  
  for (int i=0; i<N; i++) {
    cout << numbers[i] << " ";
    sum += numbers[i];
  }

  cout << endl;

  average = sum/N;

  cout << "The sum of the random numbers is: " << sum << endl;
  cout << "The average of the numbers is: " << average << endl;

  return 0;
}