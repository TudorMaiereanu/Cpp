/*
    CH08-320142
    a1_p3.cpp
    Tudor Cristian Maiereanu
    t.maiereanu@jacobs-university.de
*/

#include <iostream>

using namespace std;

int sign(int x)
{
    int sgn;
    if(x==0)
        sgn=0;
    else
        {if(x<0)
            sgn=-1;
        else
            sgn=1;}
    return sgn;
}
int main()
{
    int x;
    cout<<"Introduce the integer x=";
    cin>>x;
    cout<<"sign("<<x<<")="<<sign(x);
    return 0;
}
