/*
    CH08-320142
    a5_p4.cpp
    Tudor Maiereanu
    t.maiereanu@jacobs-university.de
*/
#include <iostream>
#include "TournamentMember.h"

using namespace std;

int main()
{
    char first_1[] = "Clemens";
    char last_1[] = "Fritz";
    char bday_1[] = "1980-12-07";
    string role_1 = "Defender";
    string team_1 = "Werder Bremen";

    char first_2[] = "Mario";
    char last_2[] = "Gotze";
    char bday_2[] = "1992-06-3";
    string role_2 = "Midfielder";
    string team_2 = "Borrusia Dortmund";

    char first_3[] = "Robert";
    char last_3[] = "Lewandowski";
    char bday_3[] = "1988-08-21";
    string role_3 = "Striker";
    string team_3 = "Bayern Munich";

    Player a(first_1, last_1, bday_1, role_1, team_1, 8, "Right-back", 5, "left");
    Player b(first_2, last_2, bday_2, role_2, team_2, 10, "Center attacking midfield", 10, "right");
    Player c(first_3, last_3, bday_3, role_3, team_3, 9, "Center forward", 16, "right");

    Referee r;

    r.addToYellowCardList(&a);

    r.addToYellowCardList(&a);

    r.addToYellowCardList(&a);

    r.addToYellowCardList(&b);

    r.addToYellowCardList(&c);

    r.addToRedCardList(&c);
    return 0;
}
