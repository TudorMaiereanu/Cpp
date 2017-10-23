/*
    CH08-320142
    a6_p2.cpp
    Tudor Maiereanu
    t.maiereanu@jacobs-university.de
*/
#ifndef FRACTION_H_
#define FRACTION_H_
#include <iostream>

class Fraction
{

private:						// internal implementation is hidden
    int num;					// numerator
    int den;					// denominator

    int gcd(int a, int b);		// calculates the gcd of a and b
    int lcm(int a, int b);

public:
    Fraction();					// empty constructor
    Fraction(int, int = 1); 	// constructor taking values for fractions and
                                // integers. Denominator by default is 1
    void print();				// prints it to the screen
    friend std::ostream& operator<<(std::ostream&, const Fraction&);
    friend std::istream& operator>>(std::istream&, Fraction&);
    Fraction operator*(Fraction &obj);
    Fraction operator/(Fraction &obj);
    //new operators
    Fraction operator+(Fraction &obj);
    Fraction operator-(Fraction &obj);
    void operator=(const Fraction &obj);
    bool operator<(Fraction &obj);
    bool operator>(Fraction &obj);
};


#endif /* FRACTION_H_ */
