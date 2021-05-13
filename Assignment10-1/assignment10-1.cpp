#include <string>
#include <iostream>
//#include <algorithm>
//#include <cstring>
using namespace std;

class Student
{
private:
  string name;
  int numClasses;
  string *classList;

public:
  Student() : name("Blank"), numClasses(0), classList(NULL){};
  Student(string n, int num) : name(n), numClasses(num) {};
  Student(Student &rhs);
  Student &operator=(Student &rhs);
  ~Student();
  void inputClass(string n, int num);
  void resetClass();
  void printAll() const;
  string getName() const {return name;};
  int getNumclasses() const {return numClasses;};
};

Student::Student(Student &rhs){
  //deep copy
  //new name = rhs.name;
  //new numClasses = rhs.numClasses;
  //new classList = rhs.classList;
}
Student::~Student() {
  //deconstructor
  delete &name;
  delete &numClasses;
  delete [] classList;
}
Student &Student::operator=(Student &rhs) {
  // = operator
  name = rhs.name;
  numClasses = rhs.numClasses;
  classList = rhs.classList;
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
  //reset class
}
void Student::printAll() const {
  //print all student info
  cout << "\nStudent " << getName() << " has " << getNumclasses() << " classes.";
  cout << " They are: " << endl;
  for (int i=0; i<getNumclasses(), i++) {
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
  Student s(sname, num);
  s.inputClass(sname, num);
  s.printAll();


}