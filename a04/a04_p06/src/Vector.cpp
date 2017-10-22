/*
    CH08-320142
    a4_p6.cpp
    Tudor Maiereanu
    t.maiereanu@jacobs-university.de
*/
#include <iostream>
#include "Vector.h"
#include <math.h>
using namespace std;

Vector::Vector()
{
    nr=0;
};

//getter functions
int Vector::getN()
{
    return nr;
}

double Vector::getEl(int a)
{
    return arr[a];
}

//dynamic alloc
Vector::Vector(Vector& a)
{
    nr=a.getN();
    arr=new double[nr];
    for(int i=0;i<nr;i++)
    {
        arr[i]=a.getEl(i);
    }
}

Vector::Vector(int n,double v[])
{
    nr=n;
    arr=new double[nr];
    for(int i=0;i<nr;i++)
        arr[i]=v[i];
}

//deconstruct
Vector::~Vector()
{
    delete []arr;
}

//setter functions
void Vector::setN(int n)
{
    nr=n;
    arr=new double[nr];
}

void Vector::setEl(int i,int val)
{
    arr[i]=val;
}

//norm of the vector
double Vector::norm()const
{
    double v=0;
    for(int i=0;i<nr;i++)
        v+=arr[i]*arr[i];
    return sqrt(v);
}

//addition of two vectors
Vector Vector::add(Vector a)const
{
    Vector b;
    b=Vector(a);
    for(int i=0;i<nr;i++)
    {
        b.setEl(i,b.getEl(i)+arr[i]);
    }
    return b;
}

//difference
Vector Vector::substract(Vector a)const
{
    Vector b;
    b=Vector();
    b.setN(nr);
    for(int i=0;i<nr;i++)
    {
        b.setEl(i,arr[i]-a.getEl(i));
    }
    return b;
}

//scalar product
double Vector::scalarproduct(Vector a){
    double v=0;
    for(int i=0;i<nr;i++){
        v+=(arr[i]*a.getEl(i));
    }
    return v;
}


//print vector
void Vector::print(){
    for(int i=0;i<nr;i++)
    {
        cout<<arr[i]<<' ';
    }
    cout<<'\n';
}
