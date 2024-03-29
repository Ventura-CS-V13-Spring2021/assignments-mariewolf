#include "rectangle.hpp"
#include "coordinate.hpp"
#include <iostream>
using namespace std;

/*Coordinate lb;
Coordinate rt;
Coordinate center;
double area;*/

Rectangle::Rectangle() : lb(0.0,0.0), rt(0.0,0.0) {
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
  double x1 = lb.getX();
  double y1 = lb.getY();
  double x2 = rt.getX();
  double y2 = rt.getY();

  area = (x2-x1)*(y2-y1);
}
Coordinate Rectangle::getCenter() {
  //calculate center
  double x1 = lb.getX();
  double y1 = lb.getY();
  double x2 = rt.getX();
  double y2 = rt.getY();

  double centerx = (x1+(x2-x1)/2);
  double centery = (y1+(y2-y1)/2);

  center.setXY(centerx, centery);
  return center;
}
void Rectangle::setLBRT(Coordinate lbval, Coordinate rtval) {
  //set lb & rt
  lb = lbval;
  rt = rtval;
}
void Rectangle::printRectangle() const {
  //print rectangle
  cout << "Left-bottom of rectangle: ";
  lb.printXY();
  cout << "Right-top of rectangle: ";
  rt.printXY();
  cout << "Center: ";
  center.printXY();
  cout << "Area: " << area << endl << endl;
}
