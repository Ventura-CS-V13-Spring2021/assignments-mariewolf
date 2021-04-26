#include <iostream>
#include <cstdlib>
#include <fstream>
using namespace std;
int main()
{
  int empID, N;
  string empName, depName;
  double salary;
  ofstream ofs("employee.txt");

  cout << "Enter how many employees you have: ";
  cin >> N;

  for (int i = 1; i <= N; i++){
    cout << "Enter the employee's ID, name, department, and salary: ";
    cin >> empID >> empName >> depName >> salary;
    ofs << empID << " " << empName << " " << depName << " " << salary << endl;
  }

  ofs.close();
  return 0;
} 