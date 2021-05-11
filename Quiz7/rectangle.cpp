#include "rectangle.hpp"
#include "coordinate.hpp"
#include <iostream>

/*Coordinate lb;
Coordinate rt;
Coordinate center;
double area;*/

Rectangle::Rectangle() : lb(0.0), rt(0.0) {
  //do nothing
}
Rectangle::Rectangle(Coordinate lbval, Coordinate rtval) : lb(lbval), rt(rtval) {
  //do nothing
}
Coordinate Rectangle::getLB() const {
  return lb;
}
Coordinate Rectangle::getRT() const {
  return rt;
}
double Rectangle::getArea() {
  //calculate area
}
Coordinate Rectangle::getCenter() {
  //calculate center
}
void Rectangle::setLBRT(Coordinate lbval, Coordinate rtval) {
  //set lb & rt
  lb = lbval;
  rt = rtval;
}
void Rectangle::printRectangle() const {
  //print rectangle
}
