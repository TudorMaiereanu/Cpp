/*
    CH08-320142
    a6_p2.cpp
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
    cout<<endl;
    if (a<b)
    {
        cout<<endl;
        cout<< b<< " is greater than "<<a<<endl;
    }
    else
    {
        if (a>b)
        {
            cout<<endl;
            cout<<a<<" is greater than "<< b<<endl;
        }
        else
        {
            cout<<endl;
            cout<<a<<" is equal to "<<b<<endl;
        }
    }
    Fraction sum = a+b;
    Fraction dif = a-b;
    Fraction prod = a*b;
    Fraction div = a/b;
    cout << "Sum of the two fractions: " << sum<<endl;
    cout << "Difference of the two fractions: " <<dif<<endl;
    cout << "Product of the two fractions: " << prod<<endl;
    cout << "Division of the two fractions: " <<div<<endl;

    return 0;
}
