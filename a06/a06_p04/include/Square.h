/*
    CH08-320142
    a6_p4.cpp
    Tudor Maiereanu
    t.maiereanu@jacobs-university.de
*/
#ifndef SQUARE_H
#define SQUARE_H
#include "Rectangle.h"

class Square : public Rectangle {
	public:
		Square(const char *n, double s);
		~Square();
		double calcArea() const;
		double calcPerimeter() const;
    private:
        double side;

};

#endif // SQUARE_H
