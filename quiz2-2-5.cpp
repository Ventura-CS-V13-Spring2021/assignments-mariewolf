#include <iostream>
using namespace std;
int main()
{
  int range1, range2;
  bool flag = false;
  cout << "Enter two integer values: ";
  cin >> range1 >> range2;
  if (range1 >= range2)
    cout << "\nInput error: First input must be less than the second.";
  cout << "\n";
  for (int i=range1; i<=range2; i++) {
    for (int j = 2; j<i; j++) {
      if (i % j == 0) {break;}
      else {cout << i << " ";}
    }
  }
  return 0;
}