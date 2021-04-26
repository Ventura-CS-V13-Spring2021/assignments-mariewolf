#include <iostream>
using namespace std;
int main()
{
     int number1, number2, number3;
     cout << "Enter three integer values : " ;
     cin >> number1 >> number2 >> number3 ;
     cout << "\n";
     if (number1 == number2) {
         if (number1 == number3) {
             cout << "All numbers are the same.";
         }
         else {
             cout << "There are two duplicated numbers.";
         }
     }
     else if (number1 == number3) {
         cout << "There are two duplicated numbers.";
     }
     else if (number2 == number3) {
         cout << "There are two duplicated numbers.";
     }
     else {
         cout << "All numbers are distinct.";
     }
     return 0;
}
