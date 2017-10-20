/*
    CH08-320142
    a3_p3.cpp
    Tudor Maiereanu
    t.maiereanu@jacobs-university.de
*/

#include <iostream>
#include <cstdlib>
#include "Critter.h"

using namespace std;

int main(int argc, char** argv)
{
	Critter *first = new Critter();
	Critter *second = new Critter( (string)"second");
	Critter *third1 = new Critter("third1", 1, 2, 10);
	Critter *third2 = new Critter("third2", 2, 4);

    (*first).setHunger(3);
    (*second).setHunger(3);
    (*third1).setHunger(3);
    (*third2).setHunger(3);

    (*first).print();
    (*second).print();
    (*third1).print();
    (*third2).print();

    delete first;
    delete second;
    delete third1;
    delete third2;




    return 0;
}
