/*
    CH08-320142
    a6_p4.cpp
    Tudor Maiereanu
    t.maiereanu@jacobs-university.de
*/
#include <iostream>
#include "Rectangle.h"

Rectangle::Rectangle(const char *n, double a, double b) : Area(n) {
    length = a;
    width = b;
}

Rectangle::~Rectangle() {
}

double Rectangle::calcArea() const {
    std::cout << "calcArea of Rectangle...";
	return length*width;
}

double Rectangle::calcPerimeter() const {

    std::cout << " calcPerimeter of Rectangle...";
    return 2*length+2*width;
}
