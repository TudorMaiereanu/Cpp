/*
    CH08-320142
    a3_p1.cpp
    Tudor Maiereanu
    t.maiereanu@jacobs-university.de
*/

#include "City.h"
#include <iostream>

using namespace std;

City::City(string n, int c, string l, string p)
{
    name=n;
    citz=c;
    location=l;
    poi=p;
}


City::City(){}

//setter functions
void City::setName(string& newName)
{
	name = newName;
}

void City::setCitizens (int newCitizens)
{
    citz=newCitizens;
}

void City::setLocation(string& newLocation)
{
    location=newLocation;
}

void City::setPOI(string& newPOI)
{
    poi=newPOI;
}

//getter functions
std::string City::getName()
{
    return name;
}

int City::getCitizens()
{
	return citz;
}

std::string City::getLocation()
{
    return location;
}

std::string City::getPOI()
{
    return poi;
}

void City::print()
{
     cout<<poi<<" is the main point of interest from " << name<<", "<<location<<" which has "<<citz<<" citizens."<<endl;
}


