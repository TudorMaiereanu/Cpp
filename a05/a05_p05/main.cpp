/*
    CH08-320142
    a5_p5.cpp
    Tudor Maiereanu
    t.maiereanu@jacobs-university.de
*/
#include <iostream>
#include "fraction.h"

using namespace std;

int main(void)

{
    Fraction a,b;
    cout << "Enter the first fraction (numerator + denominator)" << endl;
    cin >> a;
    cout << "Enter the second fraction (numerator + denominator)" << endl;
    cin >> b;
    cout << "Product of the two fractions: " << a*b;
    cout << "Quotient of the two fractions: " << a/b;

    return 0;
}
