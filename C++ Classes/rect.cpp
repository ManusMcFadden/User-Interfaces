#include <stdexcept>
#include "rect.hpp"
#include <iostream>
using namespace std;

Rectangle::Rectangle(double x, double y, double w, double h):
Shape(x, y), width(w), height(h)
{
    if (width <= 0) {
        throw invalid_argument("width must be > 0");
    }
    if (height <= 0) {
        throw invalid_argument("height must be > 0");
    }
}

void Rectangle::draw() const
{
  cout << "Drawing Rectangle("
       << "x=" << getX()
       << ",y=" << getY()
       << ",w=" << getWidth()
       << ",h=" << getHeight()
       << ")" << endl;
}