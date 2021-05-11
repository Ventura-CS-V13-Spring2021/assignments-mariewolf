#include "rectangle.hpp"
#include "coordinate.hpp"

int main()
{
    Coordinate lbval(0.0, 0.0);
    Coordinate rtval(10.0, 10.0);
    Rectangle r1(lbval, rtval);
    r1.getCenter();
    r1.getArea();
    r1.printRectangle();

    lbval.setXY(-20.0, -20.0);
    rtval.setXY(20.0, 20.0);
    r1.setLBRT(lbval, rtval);
    r1.getCenter();
    r1.getArea();
    r1.printRectangle();
}

/*
I wasn't able to finish typing my answer in time. I've continued writing here. Thank you, & I apologize for not finishing fast enough!



The program follows the main function in q-1.cpp, where the "bottom left" coordinates are set to (0,0) by passing it to the Coordinate() method in coordinate.cpp. The "top right" values are set in the same way. Then, the program creates a Rectangle object by passing these coordinates to Rectangle(). After that, the main function calculates the center and area of the rectangle object using getArea() and getCenter() in rectangle.cpp. 

getArea() works by retrieving the value for each coordinate (with getX() and getY()), and then inputting those values into a formula for area. getCenter() works very similarly to calculate the appropriate center coordinates.

Then, the values are all printed out by calling the appropriate objects and using printXY(). The area (which was previously set) is printed out as well. The entire process occurs twice in the program. 

I had trouble getting the program to run, because trying to print was causing repeated errors.
For example, in printRectangle() I had:

cout << "Area: " << getArea();

Which repeatedly gave an error of "passing 'const Rectangle' as 'this' argument discards qualifiers"

The only way I found around this was to call getCenter() and getArea() in the main function instead. */
