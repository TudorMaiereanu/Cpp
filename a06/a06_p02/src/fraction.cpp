/*
    CH08-320142
    a6_p2.cpp
    Tudor Maiereanu
    t.maiereanu@jacobs-university.de
*/
#include "fraction.h"
#include <iostream>


using namespace std;


Fraction::Fraction()
{
    num = 1;
    den = 1;
}

Fraction::Fraction(int n, int d)
{
    int tmp_gcd = gcd(n, d);

    num = n / tmp_gcd;
    den = d / tmp_gcd;
}

int Fraction::gcd(int a, int b)
{
    int remainder;
    while (b!=0)
    {
        remainder = a % b;
        a = b;
        b = remainder;
    }
    return a;
}

int Fraction::lcm(int a, int b)
{
    return a * b / gcd(a, b);
}

std::ostream& operator<<(std::ostream& os, const Fraction &obj)
{
    os << obj.num << "/" << obj.den;
    return  os;
}

std::istream& operator>>(std::istream& in, Fraction &obj)
{
    in >> obj.num;
    in >> obj.den;
    if(obj.den == 0){
        cout << "The denominator cannot be equal to zero" << std::endl;
        obj.num = 0;
        obj.den = 1;
        return  in;
    }
    else
    {
        return in;
    }
}

Fraction Fraction::operator*(Fraction &obj)
{
    Fraction rest(num * obj.num, den * obj.den);
    return rest;
}

Fraction Fraction::operator/(Fraction &obj)
{
    Fraction rest(num * obj.den, den * obj.num);
    return rest;
}

Fraction Fraction::operator+(Fraction &obj)
{
    int numerator = (num * (lcm(den,obj.den)/den)) + (obj.num *(lcm(den,obj.den)/obj.den));
    int denominator = lcm(den,obj.den);
    Fraction rest(numerator,denominator);
    return rest;
}

Fraction Fraction::operator-(Fraction &obj)
{
    int numerator = (num * (lcm(den,obj.den)/den)) - (obj.num *(lcm(den,obj.den)/obj.den));
    int denominator = lcm(den,obj.den);
    Fraction rest(numerator,denominator);
    return rest;
}

void Fraction::operator=(const Fraction &obj)
{
    num = obj.num;
    den = obj.den;
}

bool Fraction::operator<(Fraction &obj) {
    if((num * obj.den) < (obj.num * den))
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool Fraction::operator>(Fraction &obj) {
    if((num * obj.den) > (obj.num * den))
    {
        return true;
    }
    else
    {
        return false;
    }
}
