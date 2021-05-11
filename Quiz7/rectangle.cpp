#include "rectangle.hpp"
#include "coordinate.hpp"
#include <iostream>

/*Coordinate lb;
Coordinate rt;
Coordinate center;
double area;*/

Rectangle::Rectangle() : lb(0), rt(0) {
  //do nothing
}
Rectangle::Rectangle(Coordinate lbval, Coordinate rtval) : lb(lbval), rt(rtval) {
  //do nothing
}
Coordinate Rectangle::getLB() const {
  //do something
}
Coordinate Rectangle::getRT() const {
  //do something
}
double Rectangle::getArea() {
  //do something
}
Coordinate Rectangle::getCenter() {
  //do something
}
void Rectangle::setLBRT(Coordinate lbval, Coordinate rtval) {
  //do something
}
void Rectangle::printRectangle() const {
  //do something
}
