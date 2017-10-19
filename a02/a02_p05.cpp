/*
    CH08-320142
    a2_p5.cpp
    Tudor Cristian Maiereanu
    t.maiereanu@jacobs-university.de
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

bool isPalindrome(string s){
  string temp = s;
  int b = 0;
  for(int i = s.length() - 1; i >= 0; i--){
    s[b] = temp[i];
    b++;
  }
  if (temp == s){
    return true;
  }else{
    return false;
  }
}
int main(int argc, char const *argv[]) {
  string s;
  while(1){
    cout << "Type a word: " << endl;
    cin>>s;
    if(s == "stop"){
      return 0;
    }
    if(isPalindrome(s)){
      cout <<"true" << endl;
    }else{
      cout <<"false" << endl;
    }
  }
  return 0;
}
