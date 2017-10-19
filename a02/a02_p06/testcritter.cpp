/*
    CH08-320142
    a2_p6.cpp
    Tudor Cristian Maiereanu
    t.maiereanu@jacobs-university.de
*/

#include <iostream>
#include <cstdlib>
#include "Critter.h"


int main(int argc, char** argv)
{
	Critter c;

	string name;
	int hunger;

	cout << endl << "Please enter data: " << endl;
	cout << "Name: ";
	// cin >> name; will not work if name contains
	// spaces
	getline(cin, name);
	c.setName(name);
	c.setName(name);
	cout << "Hunger: ";
	cin >> hunger;
	c.setHunger(hunger);

	cout << "You have created:" << endl;
	c.print();
        return 0;
}
