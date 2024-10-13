#pragma once

#include "shape.hpp"

class Rectangle: public Shape
{
    public:
        Rectangle(double w, double h): Rectangle(0, 0 ,w , h) {}
        Rectangle(double, double, double, double);
        double getWidth() const { return width; }
        double getHeight() const { return height; }
        double perimiter() const { return 2 * (width + height); }
        double area() const { return width * height; }
        virtual void draw() const;
    
    private: 
        double width, height;
};