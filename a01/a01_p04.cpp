/*
  CH08-320142
  a1_p4.cpp
  Tudor Cristian Maiereanu
  t.maiereanu@jacobs-university.de
*/
#include <iostream>
#include <cstring>
using namespace std;

int mycount(int a, int b)
{
  return a-b;
}

int mycount(char a, string b)
{
  int count = 0;
  for(int i = 0; (unsigned)i < b.length(); i++)
  {
    if(b[i] == a)
    {
      count++;
    }
  }
  if(count == 0)
    {
    return -1;
    }
  else
    {
    return count;
    }
}

int main(int argc, char const *argv[])
{
  cout << "mycount(7,3): " <<endl;
  cout<<mycount(7,3) << endl;
  cout << "mycount('i','this is a string'): " <<endl;
  cout<<mycount('i',"this is a string") << endl;
  return 0;
}
