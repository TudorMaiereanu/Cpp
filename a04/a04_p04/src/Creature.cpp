/*
    CH08-320142
    a4_p4.cpp
    Tudor Maiereanu
    t.maiereanu@jacobs-university.de
*/
#include <iostream>
#include <string>
#include "Creature.h"

using namespace std;

Creature::Creature(): distance(10)
{}

void Creature::run() const
{
    cout << "running " << distance << " meters!\n";
}

Wizard::Wizard() : distFactor(3)
{}

void Wizard::hover() const
{
    cout << "hovering " << (distFactor * distance) << " meters!\n"<<endl;
}

Archer::Archer() : strengthFactor(4){
    cout<<"Creating Archer"<<endl;
}

Archer::Archer(int newStrength){
    strengthFactor=newStrength;
    cout<<"Giving strength to the Archer"<<endl;
}

Archer::~Archer(){
    cout<<"Deconstruction of Archer"<<endl;
}

void Archer::range(){
    cout<<"The Archer has a range of "<<(distance*strengthFactor)<<" meters."<<endl;
}

Soldier::Soldier() : resistanceFactor(2){
    cout<<"Creating Soldier"<<endl;
}

Soldier::Soldier(int newResistance){
    resistanceFactor=newResistance;
    cout<<"Giving resistance to the Soldier"<<endl;
}

Soldier::~Soldier(){
    cout<<"Deconstruction of Soldier"<<endl;
}

void Soldier::fight(){
    cout<<"The Soldier can fight for "<<(distance*resistanceFactor)<<" meters."<<endl;
}
