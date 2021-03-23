#include <iostream>
using namespace std;
int main()
{
  int number1, number2, number3, flag = 0;
  cout << "Enter three integer values: " ;
  cin >> number1 >> number2 >> number3 ;
  if ((number1 < 0) || (number1 > 99)) flag = 1;
  if ((number2 < 0) || (number2 > 99)) flag = 1;
  if ((number3 < 0) || (number3 > 99)) flag = 1;
  if (flag == 1) {
    cout << "Input error: Not in range.";
  }
}