/*
    CH08-320142
    a6_p1.cpp
    Tudor Cristian Maiereanu
    t.maiereanu@jacobs-university.de
*/
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    int die;
    int count = 0;
    int randomNumber;
    string vec[4]={"RED", "GREEN", "BLUE", "YELLOW"};
    // init random number generator
    srand(static_cast<unsigned int>(time(0)));
    while(count<10)
    {
        randomNumber = rand ();
        die = (randomNumber % 4);
        cout<< count << ": "<<vec[die]<<endl;
        count++;
    }
    return 0;
}
