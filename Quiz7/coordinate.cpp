#include "rectangle.hpp"
#include "coordinate.hpp"
#include <iostream>
/*     double x;
    double y; */

Coordinate::Coordinate() : x(0), y(0) {
  //do nothing
}
Coordinate::Coordinate(double xval, double yval) : x(xval), y(yval) {
  //do nothing
}
int Coordinate::getX() const {
  //do something
}
int Coordinate::getY() const {
  //do something
}
void Coordinate::setXY(double xval, double yval) {
  //do something
}
void Coordinate::printXY() const {
  //do something
}
