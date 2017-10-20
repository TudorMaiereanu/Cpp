/*
    CH08-320142
    a3_p6.cpp
    Tudor Maiereanu
    t.maiereanu@jacobs-university.de
*/

#include <string>
using namespace std;

class Complex {

private:
    double real;  // real part
	double imag;  // imaginary part

public:
    //Constructors
	Complex();                          // empty constructor
	Complex(double a, double b);

	Complex(const Complex& z);

	//Destructor
	~Complex();						    // empty destructor

	//Setter functions
	void setReal(double newReal);
	void setImag(double newImag);

	//Getter functions
	double getReal();
	double getImag();


	//Other functions
	Complex conjugation();
	Complex add(Complex b);
	Complex substract(Complex b);
	Complex multiply(Complex b);

	void print();
};
