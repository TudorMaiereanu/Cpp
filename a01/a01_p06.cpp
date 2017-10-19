/*
  CH08-320142
  a1_p6.cpp
  Tudor Cristian Maiereanu
  t.maiereanu@jacobs-university.de
*/
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(int argc, char const *argv[])
{
    string name;
    int number, pick;
    bool b = true;
    cout << "What is your name?" << endl;
    getline(cin, name);
    srand ( static_cast < unsigned int >( time (0) ) );
    number = rand() % 100 + 1;
    while(b)
    {
        cout << "Guess a number between 1 and 100 " << endl;
        cin >> pick;
        if(pick == number)
            {
            b = false;
            }
        else
            if(pick < number)
            {
                cout << "Too low" << endl;
            }
            else
            {
                cout << "Too high" << endl;
            }
  }
  cout << "Congratulations, " << name << "! You guessed the number!" << endl;
  return 0;
}
