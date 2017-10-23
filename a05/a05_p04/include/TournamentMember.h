/*
    CH08-320142
    a5_p4.cpp
    Tudor Maiereanu
    t.maiereanu@jacobs-university.de
*/
#include <cstring>
#include <iostream>
#ifndef tournamentmember_h
#define tournamentmemer_h

using namespace std;

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

class Player : public TournamentMember
{
    private:
        int nr;
        string position;
        int goals;
        string foot;
    public:
    //constructors
        Player(char[], char[], char[], std::string, std::string, int, string, int, string);
        Player(const Player&);
        ~Player();
    //setter functions
        void setNr(int);
        void setPosition(string);
        void setFoot(string);
    //increment
        void incrementGoals(int);
    //getter functions
        int getNr();
        string getPosition();
        int getGoals();
        string getFoot();
    //print
        void print();

};

class Referee : public TournamentMember
{
    private:
        int yellowCardCount;
        Player *yellowCardList[50];
        int redCardCount;
        Player *redCardList[50];
    public:
        Referee();
        Referee(const Referee&);
        ~Referee();
        bool addToYellowCardList(Player *p);
        bool addToRedCardList(Player *p);
};


#endif //tournamentmember_h
