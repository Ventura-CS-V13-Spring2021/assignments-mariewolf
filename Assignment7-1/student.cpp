#include "student.hpp"
#include "address.hpp"
#include "DOB.hpp"
#include <iostream>
using namespace std;

Student::Student() : sname("blank"), id(0), dob(1, 1, 1) {
  //do nothing
}
Student::Student(string stname, int idnum, DOB dob, Address address) : sname(stname), id(idnum), dob(dob), address(address) {
}
int Student::getID() const {
  return id;
}
string Student::getSname() const {
  return sname;
}
DOB Student::getDOB() const {
  return dob;
}
Address Student::getAddress() const {
  return address;
}
void Student::setSname(string name) {
  sname = name;
}
void Student::setID(int num) {
  id = num;
}
void Student::setDOB(DOB newdob) {
  dob = newdob; 
}
void Student::setAddress(Address newaddress) {
  address = newaddress;
}
void Student::printStudent() {
  cout << "Student name: " << getSname() << ", ";
  cout << "ID Number: " << getID() << ", ";
  cout << "DOB: " << dob.getMonth() << "/" << dob.getDay() << "/" << dob.getYear() << ", ";
  cout << "Address: " << address.getStreet() << ", " << address.getState() << ", " << address.getZip() << endl << endl;
}
