#include <string>
#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;

class Student
{
private:
  string name;
  int numClasses;
  string *classList;

public:
  Student() : name("Blank"), numClasses(0), classList(NULL){};
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
}
Student::Student(Student &rhs) {
  //deep copy
  name = rhs.name;
  numClasses = rhs.numClasses;
  classList = new string[numClasses];
  for (int i=0; i<numClasses; i++)
    classList[i] = rhs.classList[i];
}
Student::~Student() {
  //destructor
  name = " ";
  numClasses = 0;
  delete [] classList; //valid
}
Student &Student::operator=(Student &rhs) {
  // = operator
  numClasses = rhs.numClasses;
  classList = new string[numClasses];
  for (int i=0; i<numClasses; i++)
    classList[i] = rhs.classList[i];
  return *this;
}
void Student::inputClass(string n, int num) {
  //gathers input for classes
  classList = new string[num];
  for (int i=0; i<num; i++) {
    cout << "Enter class #" << i+1 << ": ";
    cin >> classList[i];
  }
}
void Student::resetClass() {
  //resets class
  name = " ";
  numClasses = 0;
  memset(classList, 0, sizeof(classList));
}
void Student::printAll() const {
  //print all student info
  cout << "\nStudent \"" << getName() << "\" has " << getNumclasses() << " classes. They are:" << endl;
  for (int i=0; i<getNumclasses(); i++) {
    cout << classList[i] << endl;
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
  sA.inputClass(sname, num);

  cout << "\nThis is a print of that student.";
  sA.printAll();

  Student sB("Katie", num);
  sB = sA;
  cout << "\nThis is a student with a copied class list.";
  sB.printAll();

  cout << "\nReturned name: " << sB.getName() << endl;
  cout << "Returned number of classes: " << sB.getNumclasses() << endl;

  cout << "\nThis method resets the information for the second student object.";
  sB.resetClass();
  sB.printAll();
  return 0;
}
