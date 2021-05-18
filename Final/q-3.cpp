#include <string>
#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;

//mostly copied from assignment 10-1

class Student
{
private:
  string name;
  int numClasses;
  string *classList;

public:
  Student() : name(), numClasses(0), classList(NULL){};
  Student(string n, int num);
  Student(Student &rhs);
  Student &operator=(Student &rhs);
  ~Student();
  void inputClass(string n, int num);
  void resetClass();
  void printAll() const;
  string getName() const {return name;};
  int getNumclasses() const {return numClasses;};
};
Student::Student(string n, int num) {
   name = n;
   numClasses = num;
   classList = new string[num];
   for (int i = 0; i < numClasses; i++)
   {
       cout << "Enter the course name: ";
       cin >> *(classList+i);
   }
}
Student::Student(Student &rhs) {
  name = rhs.name;
  numClasses = rhs.numClasses;
  classList = new string[numClasses];
  for (int i=0; i<numClasses; i++)
   *(classList+i) = rhs.classList[i];
}
Student::~Student() {
  name = " ";
  numClasses = 0;
  delete [] classList;
}
Student &Student::operator=(Student &rhs) {
  // = operator
  numClasses = rhs.numClasses;
  classList = new string[numClasses];
  for (int i=0; i<numClasses; i++)
    *(classList+i) = rhs.classList[i];
  return *this;
}
void Student::inputClass(string n, int num) {
  name = n;
  numClasses = num;
  if (numClass > 0) {
    classList = new string[num];
    for (int i = 0; i < numClasses; i++)
    {
      cout << "Enter the course name: ";
      cin >> *(classList+i);
   }
  }
}
void Student::resetClass() {
  name = " ";
  numClasses = 0;
  memset(classList, 0, sizeof(classList));
}
void Student::printAll() const {
  cout << "\nStudent \"" << getName() << "\" has " << getNumclasses() << " classes. They are:" << endl;
  for (int i=0; i<getNumclasses(); i++) {
    cout << *(classList+i) << endl;
  }
}

int main() {
  int num;
  string sname;
  cout << "Input the student's name: ";
  cin >> sname;
  cout << "Input the number of classes: ";
  cin >> num;
  Student sA(sname, num);
  sA.printAll();
  cout << "\nReturned name: " << sA.getName() << endl;
  cout << "Returned number of classes: " << sA.getNumclasses() << endl;
  cout << "\nThis is a student assigned \"Katie\", with 0 classes:";
  Student sB("Katie", 0);
  sB.printAll();
  sB = sA;
  cout << "\nThis is \"Katie\", with a copied class list:";
  sB.printAll();

  cout << "\nThis method resets the information for the second student object.";
  sB.resetClass();
  sB.printAll();
  return 0;
}
