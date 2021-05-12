#include <string>
#include <iostream>
using namespace std;

class Student
{
private:
  string name;
  int num_classes;
  string *class_list;

public:
  Student() : name("Test"), num_classes(0), class_list(NULL){};
  Student(string n, int num) : name(n), num_classes(num);
  Student(Student &rhs);
  ~Student();
  Student &operator=(Student &rhs);
  void inputClass(string n, int num);
  void resetClass();
  void printAll() const;
  string getName() const {return name};
  int getNumclasses() const {return num_classes};
};

Student::Student(string n, int num) {
}
Student::Student(Student &rhs){
}
Student &Student::operator=(Student &rhs) {
}
void Student::inputClass(string n, int num) {
}
void Student::resetClass() {
}
void Student::printAll() const {
}

int main() {
  int num;
  string sname;
  cout << "Input the student's name: ";
  cin >> sname;
  cout << "Input the number of classes: ";
  cin >> num;
  Student s(sname, num);

}