#include <iostream>
using namespace std;
int main()
{
     int number1, number2, number3;
     cout << "Enter three integer values : " ;
     cin >> number1 >> number2 >> number3 ;
     cout << "\n";
     if (number3 > number2) {
         if (number3 > number1) {
             cout << number3 << " is the greatest number";
         }
         else {
             cout  << number1 << " is the greatest number";
         }
     }
     else if (number2 > number1) {
         cout  << number2 << " is the greatest number";
     }
     else {
         cout  << number1 << " is the greatest number";
     }
     return 0;
}
