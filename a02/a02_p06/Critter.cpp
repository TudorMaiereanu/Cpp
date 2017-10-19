/*
    CH08-320142
    a2_p6.cpp
    Tudor Cristian Maiereanu
    t.maiereanu@jacobs-university.de
*/

#include <iostream>
#include "Critter.h"


void setName(string& newname) {
	name = newname;
}

void Critter::setHunger(int newhunger) {
	hunger = newhunger;
}

void Critter::print() {
	cout << "I am " << name << ". My hunger level is " << hunger << "." << endl;
}

int Critter::getHunger() {
	return hunger;
}
