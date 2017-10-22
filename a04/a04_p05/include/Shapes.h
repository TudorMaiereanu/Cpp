/*
    CH08-320142
    a4_p5.cpp
    Tudor Maiereanu
    t.maiereanu@jacobs-university.de
*/

#ifndef __SHAPES_H
#define __SHAPES_H
#include <string>

using namespace std;

class Shape {			// base class
	private:   				// private access modifier: could also be protected
		std::string name;   // every shape will have a name
	public:
		Shape(const std::string&);  // builds a shape with a name
		Shape();					// empty shape
		Shape(const Shape&);		// copy constructor
		void printName() const ;  	// prints the name
		void setName(string newName);
		string getName()
        {
            return name;
        };
};

class CenteredShape : public Shape {  // inherits from Shape
	private:
		double x,y;  // the center of the shape
	public:
	    void setx(double nx)
	    {
            x=nx;
        };
        double getx();
        void sety(double ny)
        {
            y=ny;
        };
        double gety();
		CenteredShape(const std::string&, double, double);  // usual three constructors
		CenteredShape();
		CenteredShape(const CenteredShape&);
		void move(double, double);	// moves the shape, i.e. it modifies it center
};

class RegularPolygon : public CenteredShape { // a regular polygon is a centered_shape with a number of edges
	private:
		int EdgesNumber;
	public:
	    void setEdges(int nl)
	    {
                EdgesNumber=nl;
	    };
	    int getEdges(){return EdgesNumber;};
		RegularPolygon(const std::string&, double, double, int);
		RegularPolygon();
		RegularPolygon(const RegularPolygon&);
};

class Circle : public CenteredShape {  // a Circle is a shape with a center and a radius
	private:
		double Radius;
	public:
	    void setRadius(double nr)
	    {
	        Radius=nr;
	    };
	    double getRadius(){return Radius;};
		Circle(const std::string&, double, double, double);
		Circle();
		Circle(const Circle&);
		double getArea(){return 3.141592653589793*Radius*Radius;};
		double getPerimeter(){return 3.141592653589793*2*Radius;};
};

class Rectangle : public RegularPolygon
{
    private:
        double Width,Height;
    public:
        void setWidth(double nw)
        {
            Width=nw;
        };
        double getWidth(){return Width;};
        void setHeight(double nh)
        {
            Height=nh;
        };
        double getHeight(){return Height;};
        Rectangle(const string, double, double, double, double);
		Rectangle();
		Rectangle(const Rectangle&);
		double getArea(){return Width*2+Height*2;};
		double getPerimeter(){return Width*Height;};
};

class Square : public Rectangle
{
	private:
		double Side;
	public:
	    void setSide(double ns)
	    {
	        Side = ns;
        };
	    double getSide(){return Side;};
		Square(const string, double, double, double);
		Square();
		Square(const Square&);
		double getArea(){return Side*Side;};
		double getPerimeter(){return Side*4;};
};

#endif
