/*
    CH08-320142
    a6_p4.cpp
    Tudor Maiereanu
    t.maiereanu@jacobs-university.de
*/
#include "Square.h"
#include<iostream>


Square::Square(const char *n, double s)
					: Area(n), Rectangle(n, s, s) {
        side = s;

}

Square::~Square() {
}

double Square::calcArea() const {
    std::cout << "  calcArea of Square...  ";
	return Rectangle::calcArea();
}

double Square::calcPerimeter() const {
    std::cout << " calcPerimeter of Square...";
    return Rectangle::calcPerimeter();
}
