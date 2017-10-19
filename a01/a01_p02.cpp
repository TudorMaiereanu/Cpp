/*
    CH08-320142
    a1_p1.cpp
    Tudor Cristian Maiereanu
    t.maiereanu@jacobs-university.de
*/

#include <iostream>

using namespace std;

int main()
{
    float val;
    int nr, i;
    string s;
    cout<<"Introduce the integer: ";
    cin>>nr;
    cout<<"Introduce the float: ";
    cin>>val;
    cout<<"Introduce the string: ";
    cin>>s;
    for(i=1; i<=nr; i++)
        cout<<val<<" "<<s<<endl;
    return 0;
}
