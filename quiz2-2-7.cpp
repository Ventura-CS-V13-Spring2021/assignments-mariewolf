#include <iostream>
#include <cstdlib>
#include <fstream>
using namespace std;
int main()
{
  ofstream ofs("employee.txt");

  cout << "Enter how many employees you have: ";
  cin >> N;

  for (int i = 1; i <= N; i++){
    cout >> "Enter the employee's ID, name, department, and salary: ";
    cin >> empID, empName, depName, salary;
  }

  ofs.close();
} 