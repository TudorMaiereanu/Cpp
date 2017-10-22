/*
    CH08-320142
    a4_p5.cpp
    Tudor Maiereanu
    t.maiereanu@jacobs-university.de
*/
#include <iostream>
#include "Shapes.h"

int main(int argc, char** argv) {

    Circle cir("first circle", 3, 4, 7);
    Rectangle rec("rectangle",3,3,3,3);
    Square squ("square",3,3,3);

    cout<<"The are area of the square introduced is "<<squ.getArea()<<'\n';
    cout<<"The perimeter of the square introduced is "<<squ.getPerimeter()<<'\n';
    cout<<endl;
    cout<<"The are area of the circle introduced is "<<cir.getArea()<<'\n';
    cout<<"The perimeter of the circle introduced is "<<cir.getPerimeter()<<'\n';
    cout<<endl;
    cout<<"The are area of the rectangle introduced is "<<rec.getArea()<<'\n';
    cout<<"The perimeter of the rectangle introduced is "<<rec.getPerimeter()<<'\n';
    cout<<endl;

}
