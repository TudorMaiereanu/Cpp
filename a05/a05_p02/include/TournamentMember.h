/*
    CH08-320142
    a5_p2.cpp
    Tudor Maiereanu
    t.maiereanu@jacobs-university.de
*/
#include <cstring>
#include <iostream>
#ifndef tournamentmember_h
#define tournamentmemer_h

class TournamentMember
{
    private:
        char first[25];
        char last[25];
        char bday[11];

        std::string role;
        std::string team;

        static std::string location;

    public:
        //constructors
        TournamentMember();
        TournamentMember(char[],char[],char[],std::string ,std::string);
        TournamentMember(const TournamentMember&);
        ~TournamentMember();

        //setter functions
        void setFirst(char*);
        void setLast(char*);
        void setBday(char*);

        void setRole(std::string);
        void setTeam(std::string);

        //getter functions
        char* getFirst();
        char* getLast();
        char* getBday();

        std::string getRole();
        std::string getTeam();

        //print
        void print();
        void setLocation(std::string);
};
#endif //tournamentmember_h
