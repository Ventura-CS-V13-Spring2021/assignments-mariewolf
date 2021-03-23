#include <iostream>
#include <cstdlib>
#include <fstream>
using namespace std;
int main()
{
  int empID, total, counter = 0;
  string empName, depName;
  double salary;
  ifstream empfile;
  empfile.open("employee.txt");
  while (!empfile.fail()) {
    empfile >> empID >> empName >> depName >> salary;
    cout << empID << " " << empName << " " << depName << " " << salary << endl;
    total += salary;
    counter += 1;
  }
  cout << "The total of the salaries is: " << total << endl;
  cout << "The average of the salaries is: " << total/double(counter);
  return 0;
} 