/*
    CH08-320142
    a5_p1.cpp
    Tudor Maiereanu
    t.maiereanu@jacobs-university.de
*/

#include "Shapes.h"
#include <iostream>

using namespace std;

int main(){

    Hexagon x("hexagon1",0,0,5.0,"blue");
    Hexagon y("hexagon2",0,0,7.0,"red");

    Hexagon c = y;

    cout << x.getPerimeter() << endl;
    cout << y.getPerimeter() << endl;
    cout << c.getPerimeter() << endl;

    cout << x.getArea() << endl;
    cout << y.getArea() << endl;
    cout << c.getArea() << endl;
    return 0;
}
