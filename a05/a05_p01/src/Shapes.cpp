/*
    CH08-320142
    a5_p1.cpp
    Tudor Maiereanu
    t.maiereanu@jacobs-university.de
*/
#include <iostream>
#include "Shapes.h"
#include<cmath>

using namespace std;

Shape::Shape(){
}

Shape::Shape(const string& n) : name(n) {
}

void Shape::printName() const {
	cout << name << endl;
}

CenteredShape::CenteredShape()
{

}

CenteredShape::CenteredShape(const string& n, double nx, double ny): Shape(n) {
	x = nx;
	y = ny;
}
RegularPolygon::RegularPolygon()
{

}
RegularPolygon::RegularPolygon(const string& n, double nx, double ny, int nl) :
	CenteredShape(n,nx,ny)
{
	EdgesNumber = nl;
}

Circle::Circle()
{

}
Circle::Circle(const string& n, double nx, double ny, double r) :
  CenteredShape(n,nx,ny)
{
	Radius = r;
}



Hexagon::Hexagon(const string& n, double nx, double ny, double ns, string nc) : RegularPolygon(n, nx, ny, 6)
{
    Side = ns;
    Color = nc;
}

Hexagon::Hexagon(){}

Hexagon::Hexagon(Hexagon &hex)
{
    Side = hex.getSide();
    Color = hex.getColor();
}

Hexagon::~Hexagon(){};


