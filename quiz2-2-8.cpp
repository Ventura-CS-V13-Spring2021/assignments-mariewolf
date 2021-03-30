#include <iostream>
#include <cstdlib>
#include <fstream>
using namespace std;
int main()
{
  int empID, total, counter;
  string N;
  string empName, depName;
  double salary;
  ifstream empfile;
  empfile.open("employee.txt");
  cout << "ID     Name    Department    Salary\n";
  while (!empfile.eof()) {
    empfile >> empID >> empName >> depName >> salary;
    cout << empID << "   " << empName << "   " << depName << "   " << salary << endl;
    total += salary;
    counter += 1;
  }
  cout << "The total of the salaries is: " << total << endl;
  cout << "The average of the salaries is: " << total/double(counter);
  empfile.close();
  return 0;
} 