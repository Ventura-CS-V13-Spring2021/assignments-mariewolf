#include "rectangle.hpp"
#include "coordinate.hpp"
#include <iostream>
using namespace std;
/*     double x;
    double y; */

Coordinate::Coordinate() {
  //do nothing
}
Coordinate::Coordinate(double xval, double yval) : x(xval), y(yval) {
  //do nothing
}
int Coordinate::getX() const {
  return x;
}
int Coordinate::getY() const {
  return y;
}
void Coordinate::setXY(double xval, double yval) {
  //set x & y
  x = xval;
  y = yval;
}
void Coordinate::printXY() const {
  //print x & y values
  cout << "(" << x << "," << y << ")" << endl;
}
