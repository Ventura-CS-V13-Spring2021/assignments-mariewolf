#include <iostream>
#include "IntegerArray.hpp"
using namespace std;
int main() {
  IntegerArray N;

  N.fillUp();
  N.printAll();
  cout << "Current length is " << N.getLength() << endl;

  cout << "\nAfter sorting: \n";
  N.sortAsc();
  N.printAll();

  cout << "\n\nRemoving the last element: ";
  N.removeLastelm();

  cout << "Current length is " << N.getLength() << endl;
  N.printAll();

  cout << "\n\nAppending an element: ";
  N.appendElement(100);
  cout << "Current length is: " << N.getLength() << endl;
  N.printAll();
}