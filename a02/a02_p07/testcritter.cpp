/*
    CH08-320142
    a2_p7.cpp
    Tudor Cristian Maiereanu
    t.maiereanu@jacobs-university.de
*/

#include <iostream>
#include <cstdlib>
#include "Critter.h"

using namespace std;

int main(int argc, char** argv)
{
	Critter c;

	string name, country, favouritecolor;
	int hunger, boredom;
	int age;


	cout << endl << "Please enter data: " << endl;
	cout << "Name: ";
	getline(cin, name);
	c.setName(name);

	cout << "Hunger: ";
	cin >> hunger;
	c.setHunger(hunger);

	cout << "Boredom: ";
	cin >> boredom;
	c.setBoredom(boredom);

	cout << "Age: ";
	cin >> age;
	c.setAge(age);

	cout << "Country: ";
	getline(cin >> ws, country); //Remove leading whitespaces
	c.setCountry(country);

	cout << "Favouritecolor: ";
	getline(cin, favouritecolor);
	c.setFavouritecolor(favouritecolor);

	cout << "You have created:" << endl;
	c.print();
  return 0;
}
