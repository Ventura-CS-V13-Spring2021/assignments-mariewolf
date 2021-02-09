#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
               int aClass, bClass, cClass;
               
               const double rateA = 15.00;
               const double rateB = 12.00;
               const double rateC = 9.00;
               
               cout << "How many class A, B, & C seats were sold?\nA:";
               cin >> aClass;
               cout << "B:";
               cin >> bClass;
               cout << "C:";
               cin >> cClass;
               
               double totalA = aClass * rateA;
               double totalB = bClass * rateB;
               double totalC = cClass * rateC;
               double total_amount = totalA + totalB + totalC;
               
               // print total_amount, totalA, totalB, totalC
               cout << "The grand total for sales is $" << total_amount;
               cout << "\nClass A sales: $" << totalA;
               cout << "\nClass B sales: $" << totalB;
               cout << "\nClass C sales: $" << totalC;
}