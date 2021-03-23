#include <iostream>
using namespace std;
int main()
{
  int range1, range2;
  bool flag = false;
  cout << "Enter two integer values: ";
  cin >> range1 >> range2;
  cout << "\nThe prime numbers in the range are: ";
  if (range1 >= range2)
    cout << "\nInput error: First input must be less than the second.";
  for (int i=range1; i<=range2; i++) {
    for (int j=2; j<i; j++) {
      if (i%j==0) {
        flag=true;
        break;
        }
      else{flag=false;}
    }
    if (flag==false) {cout << i << " ";}
  }
  return 0;
}