/*
    CH08-320142
    a3_p6.cpp
    Tudor Maiereanu
    t.maiereanu@jacobs-university.de
*/

#include <iostream>
#include <cstdlib>
#include "Complex.h"

using namespace std;

int main(int argc, char** argv)
{
  Complex z;

  double real, imag;

  cout << "Input real part of x: ";
  cin >> real;
  cout << "Input imaginary part of x: ";
  cin >> imag;
  Complex x(real,imag);
  cout<<"x=";
  x.print();

  cout << endl << "Input real part of y: ";
  cin >> real;
  cout << "Input imaginary part of y: ";
  cin >> imag;
  Complex y(real,imag);
  cout <<endl;
  cout<<"y=";
  y.print();

  z = x.conjugation();
  cout << "Conjugate of x: " << endl;
  z.print();

  z = x.add(y);
  cout << "Addition of x and y: " << endl;
  z.print();

  z = y.substract(x);
  cout << "Subtraction of x from y: " << endl;
  z.print();

  z = x.multiply(y);
  cout << "Multiplication of x and y: " << endl;
  z.print();

  return 0;
}
