/*
  CH08-320142
  a1_p5.cpp
  Tudor Cristian Maiereanu
  t.maiereanu@jacobs-university.de
*/
#include <iostream>
#include <cstring>
using namespace std;

int main(int argc, char const *argv[])
{
    string conc;
    string word;
    bool b = true;
    while(b)
    {
        cout << "Type a string:" << endl;
        getline(cin,word);
        if(word == "q")
            {
            b = false;
            }
        else
            {
            conc = conc + word;
            }
    }
    cout<<"The final string is:"<<endl;
    cout << conc << endl;
    return 0;
}
