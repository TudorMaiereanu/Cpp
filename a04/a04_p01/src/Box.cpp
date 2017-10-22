/*
    CH08-320142
    a4_p1.cpp
    Tudor Maiereanu
    t.maiereanu@jacobs-university.de
*/

#include <iostream>
#include "Box.h"

using namespace std;

Box::Box(double newHeight, double newWidth, double newDepth){
    height = newHeight;
    width = newWidth;
    depth = newDepth;
}


Box::~Box(){

}
Box::Box(){

}
void Box::setHeight(double newHeight) {
    height = newHeight;
}


void Box::setWidth(double newWidth) {
    width = newWidth;
}

void Box::setDepth(double newDepth) {
    depth = newDepth;
}

double Box::getHeight(){
    return height;
}
double Box::getWidth() {
    return width;
}
double Box::getDepth() {
    return depth;
}
double Box::getVolume() {
    return height*width*depth;
}
