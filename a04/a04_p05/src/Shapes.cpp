/*
    CH08-320142
    a4_p5.cpp
    Tudor Maiereanu
    t.maiereanu@jacobs-university.de
*/

#include <iostream>
#include "Shapes.h"

using namespace std;

Shape::Shape(const string& n) : name(n) {
}


Shape::Shape(){
    name="shape";
}

void Shape::printName() const {
	cout << name << endl;
}

CenteredShape::CenteredShape(const string& n, double nx, double ny):Shape(n) {
	x = nx;
	y = ny;
}

CenteredShape::CenteredShape():Shape("CenteredShape"){
    x=0;
    y=0;
}

double CenteredShape::getx()
{
    return x;
};

double CenteredShape::gety()
{
    return y;
};

RegularPolygon::RegularPolygon(const string& n, double nx, double ny, int nl):CenteredShape(n,nx,ny)
{
	EdgesNumber = nl;
}

RegularPolygon::RegularPolygon():CenteredShape("Centered Shape",0,0)
{
    EdgesNumber=3;
}

Circle::Circle(const string& n, double nx, double ny, double nr):CenteredShape(n,nx,ny)
{
	Radius = nr;
}

Circle::Circle():CenteredShape("Circle",0,0)
{
    Radius=3;
}

Rectangle::Rectangle(const string n, double nx, double ny, double nw, double nh):RegularPolygon(n,nx,ny,4)
{
	Width=nw;
	Height=nh;
}

Rectangle::Rectangle():RegularPolygon("Rectangle",0,0,4){
    Width=4;
    Height=3;
}



Square::Square(string n,double nx,double ny,double ns):Rectangle(n,nx,ny,ns,ns){
    Side=ns;
}

Square::Square():Rectangle("Square",0,0,3,3){
    Side=3;
}
