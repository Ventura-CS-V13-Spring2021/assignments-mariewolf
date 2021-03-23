#include <iostream>
using namespace std;
int main()
{
  int range1, range2;
  cout << "Enter two integer values: ";
  cin >> range1 >> range2;
  if (range1 >= range2)
    cout << "\nInput error: First input must be less than the second.";
}