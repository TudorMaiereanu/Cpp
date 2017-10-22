/*
    CH08-320142
    a4_p1.cpp
    Tudor Maiereanu
    t.maiereanu@jacobs-university.de
*/

#include <iostream>
#include <cstdlib>
#include "Box.h"

using namespace std;

int main(int argc, char** argv)
{
        int n,s=0,i;
        cout<<"Enter number of boxes: ";
        cin>>n;
        cout<<endl;
        Box* arr;
        arr=new Box[n];
        double height, width, depth;
        for(int i=0; i<n; i++){
            cout<<"Box "<<i+1<<"\tEnter height: ";
            cin>>height;
            cout<<"Box "<<i+1<<"\tEnter width: ";
            cin>>width;
            cout<<"Box "<<i+1<<"\tEnter depth: ";
            cin>>depth;
            cout<<endl;
            Box temp(height,width,depth);
            arr[i] = temp;
        }
        for(i=0; i<n; i++){
            cout<<"Volume of box "<<i+1<<" is "<<arr[i].getVolume()<<endl;
            s=s+arr[i].getVolume();
        }
        cout<<endl;
        cout<<"The total volume of all boxes is "<<s<<endl;

        return 0;
}
