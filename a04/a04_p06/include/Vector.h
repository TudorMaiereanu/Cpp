/*
    CH08-320142
    a4_p6.cpp
    Tudor Maiereanu
    t.maiereanu@jacobs-university.de
*/
#include <iostream>
using namespace std;

class Vector
{
    private:
        int nr;
        double *arr;
    public:
       Vector();
       Vector(int n,double v[]);
       ~Vector();
       Vector(Vector& a);

       void setN(int n);
       int getN();

       void setEl(int i,int val);
       double getEl(int a);

       double norm()const;
       Vector add(const Vector a)const;
       Vector substract(const Vector a)const;
       double scalarproduct(const Vector a);
       void print();
};
