#include "rectangle.hpp"
#include "coordinate.hpp"
#include <iostream>
/*     double x;
    double y; */

Coordinate::Coordinate() : x(0.0, 0.0), y(0.0, 0.0) {
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
  cout << "X: " << x << "Y: " << y << endl;
}
