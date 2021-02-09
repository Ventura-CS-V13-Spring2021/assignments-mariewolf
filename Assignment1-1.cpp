#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
               int aClass, bClass, cClass;
               double totalA, totalB, totalC, total_amount;
               
               const double rateA = 15.00;
               const double rateB = 12.00;
               const double rateC = 9.00;
               
               cout << "How many class A, B, & C seats were sold?\nA: ";
               cin >> aClass;
               cout << "B: ";
               cin >> bClass;
               cout << "C: ";
               cin >> cClass;
               
               totalA = aClass * rateA;
               totalB = bClass * rateB;
               totalC = cClass * rateC;
               total_amount = totalA + totalB + totalC;
               
               cout << fixed << showpoint << setprecision(2);
               cout << "\nThe grand total for sales is $" << total_amount;
               cout << "\nClass A sales: $" << totalA;
               cout << "\nClass B sales: $" << totalB;
               cout << "\nClass C sales: $" << totalC;
               
               return 0;
}