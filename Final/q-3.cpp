#include <string>
#include <iostream>
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
  if (numClasses > 0) {
    classList = new string[num];
    for (int i = 0; i < numClasses; i++)
    {
      cout << "Enter the course name: ";
      cin >> *(classList+i);
   }
  }
}
void Student::resetClass() {
  numClasses = 0;
  delete [] classList;
}
void Student::printAll() const {
  cout << "\nStudent \"" << getName() << "\" has " << getNumclasses() << " classes.";
  if (getNumclasses() > 0) {
    cout << " They are:\n";
    for (int i=0; i<getNumclasses(); i++) {
      cout << *(classList+i) << endl;
    }
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
  cout << "\nThis is a student assigned \"Katie,\" assigned 0 classes.";
  Student sB("Katie", 0);
  sB.printAll();
  cout << "\n\nInput a class for \"" << sB.getName() <<".\"\n";
  sB.inputClass("Katie", 1);
  sB.printAll();
  sB = sA;

  cout << "\nThis is \"" << sB.getName() <<"\", with a copied class list.";
  sB.printAll();

  cout << "\nThis method resets the information for the second student object.";
  sB.resetClass();
  sB.printAll();
  sB = sA;

  cout << "\n\nThis shows the copy constructor.";
  Student sC(sA);
  sC.printAll();
  return 0;
}
