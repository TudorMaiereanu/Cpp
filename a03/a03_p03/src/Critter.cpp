/*
    CH08-320142
    a3_p3.cpp
    Tudor Maiereanu
    t.maiereanu@jacobs-university.de
*/

#include <iostream>
#include <string>
#include "Critter.h"

using namespace std;

Critter::Critter(){
    cout<<"This is the first constructor"<<endl;
    name="critter";
    boredom = 0;
    hunger = 0.0;
    height = 10;
}
Critter::Critter(string newName){
    cout<<"This is the second constructor"<<endl;
    boredom = 0;
    hunger = 0.0;
    height=10;
    name=newName;
}
Critter::Critter(string newName, int newHunger, int newBoredom, double newHeight){
    cout<<"This is the third constructor"<<endl;
    name=newName;
    hunger=newHunger/10.0;
    boredom=newBoredom;
    height=newHeight;
}


void Critter::setName(string newName){
    name=newName;
}

void Critter::setHunger(int newHunger) {
	hunger = newHunger/10.0;
	cout<<"setHunger called"<<endl;
}


void Critter::print() {
	cout << "I am " << name << ". My hunger level is " << hunger*10 << ". My height is "<<height<<". My boredom is "<<boredom << endl;
}


int Critter::getHunger() {
	return hunger*10;
}
