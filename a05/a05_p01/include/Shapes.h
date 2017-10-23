/*
    CH08-320142
    a5_p1.cpp
    Tudor Maiereanu
    t.maiereanu@jacobs-university.de
*/

#ifndef __SHAPES_H
#define __SHAPES_H
#include <string>
#include <cmath>

using namespace std;

class Shape {			// base class
	private:   				// private access modifier: could also be protected
		std::string name;   // every shape will have a name
	public:
		Shape(const std::string&);  // builds a shape with a name
		Shape();					// empty shape
		Shape(const Shape&);		// copy constructor
		void printName() const ;  	// prints the name
};

class CenteredShape : public Shape {  // inherits from Shape
	private:
		double x,y;  // the center of the shape
	public:
		CenteredShape(const std::string&, double, double);  // usual three constructors
		CenteredShape();
		CenteredShape(const CenteredShape&);
		void move(double, double);	// moves the shape, i.e. it modifies it center
};

class RegularPolygon : public CenteredShape { // a regular polygon is a centered_shape with a number of edges
	private:
		int EdgesNumber;
	public:
		RegularPolygon(const std::string&, double, double, int);
		RegularPolygon();
		RegularPolygon(const RegularPolygon&);
};

class Circle : public CenteredShape {  // a Circle is a shape with a center and a radius
	private:
		double Radius;
	public:
		Circle(const std::string&, double, double, double);
		Circle();
		Circle(const Circle&);
};

class Hexagon : public RegularPolygon
{
    private:
        double Side;
        string Color;
    public:
        void setSide(double ns)
        {
            Side=ns;
        };
        double getSide(){return Side;};
	    void setColor(string nc)
	    {
	        Color=nc;
	    };
        string getColor(){return Color;};

        Hexagon(const string&, double, double, double, string);
		Hexagon();
		Hexagon(Hexagon&);
		~Hexagon();

		double getArea(){return 3*sqrt(3)*Side*Side*0.5;};
		double getPerimeter(){return 6*Side;};
};

#endif
