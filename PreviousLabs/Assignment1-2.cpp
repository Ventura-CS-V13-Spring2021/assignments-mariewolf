#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
               double F, C;
               
               cout << "Enter a temperature in Celcius: ";
               cin >> C;
               F = (9.0/5)*C + 32;
               cout << fixed << showpoint << setprecision(1);
               cout << C << " degrees Celcius is " << F << " degrees Fahrenheit";
               
               return 0;
}