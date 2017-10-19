/*
    CH08-320142
    a2_p1.cpp
    Tudor Cristian Maiereanu
    t.maiereanu@jacobs-university.de
*/
#include <iostream>

using namespace std;

int fun(int a[], int n)
{
    int i;
    for(i=0;i<n;i++)
        if(a[i]%2!=0 && a[i]>0)
            return a[i];
    return -1;
}

int fun(double a[], int n)
{
    int i;
    for(i=0;i<n;i++)
        if(a[i]>0 && (double)a[i]==(int)a[i])
            return a[i];
    return -1.1;
}

char fun(char a[], int n)
{
    int i;
    for(i=0;i<n;i++)
        if(a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u')
            return a[i];
    return '0';
}
int main()
{
    int i[]={2,-3,4,-4,5,3,10,-5};
    double d[]={1.22, 3, 3.456, 5, 543};
    char c[]={'c','a','d'};
    cout<<"first"<<endl<<fun(i,8)<<endl;
    cout<<"second"<<endl<<fun(d, 5)<<endl;
    cout<<"third"<<endl<<fun(c,3)<<endl;
    return 0;
}
