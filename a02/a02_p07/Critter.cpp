/*
    CH08-320142
    a2_p7.cpp
    Tudor Cristian Maiereanu
    t.maiereanu@jacobs-university.de
*/

#include <iostream>
#include "Critter.h"

using namespace std;

void Critter::setName(string& newname) {
	name = newname;
}

void Critter::setHunger(int newhunger) {
	hunger = newhunger;
}

void Critter::setBoredom(int newboredom){
	boredom = newboredom;
}

void Critter::setAge(int newage){
	age = newage;
}

void Critter::setCountry(string& newcountry){
	country = newcountry;
}

void Critter::setFavouritecolor(string& newfavouritecolor){
	favouritecolor = newfavouritecolor;
}

string Critter::getName(){
	return name;
}

int Critter::getHunger() {
	return hunger;
}

int Critter::getBoredom(){
	return boredom;
}

int Critter::getAge(){
	return age;
}

string Critter::getCountry(){
	return country;
}

string Critter::getFavouritecolor(){
	return favouritecolor;
}

void Critter::print() {
	cout << "I am " << name << "." << endl;
	cout << "My hunger level is " << hunger << "." << endl;
	cout << "My boredome level is " << boredom << "." << endl;
	cout << "My age is " << age << "." << endl;
	cout << "My country is " << country << "." << endl;
	cout << "My favourite color is " << favouritecolor << "." << endl;
}
