/*
    CH08-320142
    a5_p2.cpp
    Tudor Maiereanu
    t.maiereanu@jacobs-university.de
*/
#include "TournamentMember.h"
#include <iostream>

using namespace std;

int main()
{
    char first[] = "Clemens";
    char last[] = "Fritz";
    char bday[] = "1980-12-07";
    string role = "Defender";
    string team = "Werder Bremen";
    // default
    TournamentMember a;

    //creating player
    TournamentMember b(first,last,bday,role,team);

    //copy player
    TournamentMember c = b;

    //printing
    a.print();
    b.print();
    c.print();

    //location change
    c.TournamentMember::setLocation("Bremen");
    c.print();
    return 0;
}
