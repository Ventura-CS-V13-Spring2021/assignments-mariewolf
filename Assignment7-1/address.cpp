#include "student.hpp"
#include "address.hpp"
#include "DOB.hpp"
#include <iostream>
#include <string>
using namespace std;


Address::Address() : street("blank"), state("null"), zip(0) {
  //do nothing
}
Address::Address(string str, string st, int z) {
  setAddress(str, st, z);
}
string Address::getStreet() const {
  return street;
}
string Address::getState() const {
  return state;
}
int Address::getZip() const {
  return zip;
}
void Address::printAddress() const {
  cout << "print Address test" << endl;
}
void Address::setStreet(string addr) {
  street = addr;
}
void Address::setState(string st) {
  state = st;
}
void Address::setZip(int z) {
  zip = z;
}
void Address::setAddress(string addr, string st, int z) {
  setStreet(addr);
  setState(st);
  setZip(z);
}
