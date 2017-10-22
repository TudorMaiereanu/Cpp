/*
    CH08-320142
    a4_p6.cpp
    Tudor Maiereanu
    t.maiereanu@jacobs-university.de
*/
#include <iostream>
#include "Vector.h"
using namespace std;

int main()
{
    Vector a,b,c,d,e;
    double v[4]={1.1, 2.3, 4.5, 3};

    a=Vector(4,v);
    a.print();

    b=Vector(a);
    b.print();

    c=Vector();
    c.setN(4);

    for(int i=0;i<4;i++)
        c.setEl(i,v[i]);

    c.print();

    cout<<"Norm of the vector:"<<endl;
    cout<<a.norm()<<'\n';

    cout<<"Scalar product of two vectors:"<<endl;
    cout<<a.scalarproduct(c)<<'\n';

    cout<<"Sum of two vectors:"<<endl;
    d=a.add(c);
    d.print();

    cout<<"Difference of two vectors:"<<endl;
    e=a.substract(c);
    e.print();
}
