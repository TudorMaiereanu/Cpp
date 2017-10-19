/*
    CH08-320142
    a2_p3.cpp
    Tudor Cristian Maiereanu
    t.maiereanu@jacobs-university.de
*/
#include <iostream>

using namespace std;

void add_min(int* &a, int n)
{
    int i;
    int min=a[0];
    for(i=0;i<n;i++)
    {
        if(min>a[i])
            min=a[i];
    }
    for(i=0;i<n;i++)
    {
        a[i]=a[i]+min;
    }
}

int main()
{
    int i,n;
    int* vec=NULL;
    cout<<"How many numbers would you like to store?"<<endl;
    cin>> n;
     vec = new int[n];
    for(i=0;i<n;i++)
    {
        cout<<"Type element: ";
        cin>>vec[i];
    }
    add_min(vec,n);
    cout<<"The new array is"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<vec[i]<<" ";
    }
    delete [] vec;
    vec=NULL;
    return 0;
}





