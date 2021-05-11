#include "student.hpp"
#include "address.hpp"
#include "DOB.hpp"
#include <iostream>
using namespace std;


DOB::DOB() : month(1), day(1), year(1) {
  //do nothing
}
DOB::DOB(int m, int d, int y) :month(m), day(d), year(y) {
}
int DOB::getMonth() const {
  return month;
}
int DOB::getDay() const {
  return day;
}
int DOB::getYear() const {
  return year;
}
void DOB::printDate() const {
  // Print all member variable to display the date of birth.
  cout << "DOB: " << getMonth() << "/" << getDay() << "/" << getYear() << ", ";
}
void DOB::setDOB(int m, int d, int y) {
  //set month, day, year
  setMonth(m);
  setDay(d);
  setYear(y);
}
void DOB::setMonth(int m) {
  month = m;
}
void DOB::setDay(int d) {
  day = d;
}
void DOB::setYear(int y) {
  year = y;
}
