#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
  const int N = 10;
  int numbers[N] = {5,10,15,20,25,30,35,40,45,50};
  
  cout << "Forward: ";
  for (int eachvalue : numbers)
    cout << eachvalue << " ";
  cout << endl << "Reverse: ";
  for (int i = 1; i <= N; i++)
    cout << numbers[N - i] << " ";
  return 0;
}
