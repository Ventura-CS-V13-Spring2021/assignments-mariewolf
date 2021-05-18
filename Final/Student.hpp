#ifndef STUDENT_H
#define STUDENT_H

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

#endif