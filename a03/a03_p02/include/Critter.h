/*
    CH08-320142
    a3_p2.cpp
    Tudor Maiereanu
    t.maiereanu@jacobs-university.de
*/

#include <string>

using namespace std;

class Critter
{
private:
    string name;
    double height;
    int boredom;
    int hunger;

public:
    Critter();
    Critter(string name);
    Critter(string name, int hunger, int boredom, double height=20);

    void setName(string newName);
    void setHunger(int newHunger);
    void setBoredom(int newBoredom);
    int getHunger();
    void print();
};


