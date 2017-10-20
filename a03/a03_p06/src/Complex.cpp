/*
    CH08-320142
    a3_p6.cpp
    Tudor Maiereanu
    t.maiereanu@jacobs-university.de
*/

#include<iostream>
#include "Complex.h"

using namespace std;

//Defining the constructors

Complex::Complex()
{
    real = 0;
    imag = 0;
}

Complex::Complex(double newReal, double newImag)
{
    real = newReal;
    imag = newImag;
}

Complex::Complex(const Complex &z)
{
  real = z.real;
  imag = z.imag;
}

Complex::~Complex()
{
    //empty
}

//Defining the setter functions
double Complex::getReal()
{
    return real;
}

double Complex::getImag()
{
    return imag;
}

//Defining the other functions
Complex Complex::conjugation()
{
    Complex z;
    z.real=real;
    z.imag=(-1)*imag;
    return z;
}

Complex Complex::add(Complex b)
{
    Complex z;
    z.real= real +b.real;
    z.imag= imag +b.imag;
    return z;
}

Complex Complex::substract(Complex b)
{
    Complex z;
    z.real= real -b.real;
    z.imag= imag -b.imag;
    return z;
}

Complex Complex::multiply(Complex b)
{
    Complex z;
    z.real= (real *b.real) - (imag *b.imag);
    z.imag= (imag *b.real) + (real *b.imag);
    return z;
}

void Complex::print()
{
    cout<<noshowpos<<real<<showpos<<imag<<"i"<<endl;
}
