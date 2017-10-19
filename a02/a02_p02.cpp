/*
    CH08-320142
    a2_p2.cpp
    Tudor Cristian Maiereanu
    t.maiereanu@jacobs-university.de
*/
#include <iostream>

using namespace std;

void swap ( int &a, int &b)
{
    int help = a;
    a = b;
    b = help ;
}
void swap ( double &a, double &b)
{
    double help = a;
    a = b;
    b = help ;
}
void swap ( char &a, char &b)
{
    int help = a;
    a = b;
    b = help ;
}
int main(void)
{
    int a=5,b=10;
    double x=5.2,y=10.7;
    const char *str1="One";
    const char *str2="Two";

    cout<<"a="<<a<<", b="<<b<<endl;
    cout<<"x="<<x<<", y="<<y<<endl;
    cout<<"str1="<<str1<<",strw="<<str2<<endl;

    swap(a,b);
    swap(x,y);
    swap(str1,str2);

    cout<<"a="<<a<<", b="<<b<<endl;
    cout<<"x="<<x<<", y="<<y<<endl;
    cout<<"str1="<<str1<<",strw="<<str2<<endl;
}
