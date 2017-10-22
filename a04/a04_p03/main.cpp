/*
    CH08-320142
    a4_p3.cpp
    Tudor Maiereanu
    t.maiereanu@jacobs-university.de
*/
#include <iostream>
#include <cstdlib>
#include <string.h>
#include "Creature.h"

using namespace std;

int main()
{
    cout << "Creating a Creature.\n";
    Creature c;
    c.run();

    cout << "\nCreating a Wizard.\n";
    Wizard w;
    w.run();
    w.hover();

    cout<<"\nCreating an Archer"<<endl;
    Archer a(5);
    a.run();
    a.range();

    cout<<"\nCreating a Soldier"<<endl;
    Soldier s(2);
    s.run();
    s.fight();

    return 0;
}
