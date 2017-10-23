/*
    CH08-320142
    a5_p4.cpp
    Tudor Maiereanu
    t.maiereanu@jacobs-university.de
*/
#include <iostream>
#include <cstring>
#include "TournamentMember.h"
using namespace std;

string TournamentMember::location = "Germany";
TournamentMember::TournamentMember()
{
    cout << "default constructor called" << endl;
    strcpy(first, "default first name");
    strcpy(last, "default last name");
    strcpy(bday, "yyyy-mm-dd");
    role="default role";
    team = "default team";
}

TournamentMember::TournamentMember(char newFirst[], char newLast[], char newBday[], std::string newRole, std::string newTeam)
{
    cout << "creating constructor called" << endl;
    strcpy(first, newFirst);
    strcpy(last, newLast);
    strcpy(bday, newBday);
    role = newRole;
    team = newTeam;
}

TournamentMember::TournamentMember(const TournamentMember &obj)
{
    cout << "copy constructor called" << endl;
    strcpy(first,obj.first);
    strcpy(last,obj.last);
    strcpy(bday,obj.bday);
    role= obj.role;
    team = obj.team;
}

TournamentMember::~TournamentMember()
{
    cout << "destructor called" << endl;
}


//inline

inline void TournamentMember::setFirst(char* newFirst)
{
    strcpy(first, newFirst);
}

inline void TournamentMember::setLast(char* newLast)
{
    strcpy(last,newLast);
}

inline void TournamentMember::setBday(char* newBday)
{
    strcpy(bday, newBday);
}

inline void TournamentMember::setRole(std::string newRole)
{
    role = newRole;
}

inline void TournamentMember::setTeam(std::string newTeam)
{
    team = newTeam;
}

//Getters
inline char* TournamentMember::getFirst()
{
    return first;
}

inline char* TournamentMember::getLast()
{
    return last;
}

inline char* TournamentMember::getBday()
{
    return bday;
}

inline string TournamentMember::getRole(){
    return role;
}

inline string TournamentMember::getTeam()
{
    return team;
}


void TournamentMember::setLocation(string newLocation)
{
    location = newLocation;
}

void TournamentMember::print()
{
    cout<<endl;
    cout<<"Player data:"<<endl;
    cout<< "Name: " << first<< " " << last << endl;
    cout<< "Birthday: " << bday << endl;
    cout<<"Role: " << role << endl;
    cout<< "Team: " << team << endl;
    cout<<"Location: " << location << endl;
    cout<<endl;
}

//Player

Player::Player(char newFirst[], char newLast[], char newBday[], std::string newRole, std::string newTeam,
               int newNr, string newPosition, int newGoals, string newFoot) : TournamentMember(newFirst, newLast, newBday, newRole, newTeam)
{
    cout << "creating player constructor called" << endl;
    nr = newNr;
    position = newPosition;
    foot = newFoot;
}


Player::Player(const Player &obj): TournamentMember(obj)
{
    cout << "copy player constructor called" << endl;
    nr = obj.nr;
    position = obj.position;
    goals = obj.goals;
    foot = obj.foot;
}

Player::~Player()
{
    cout << "player destructor called" << endl;
}

inline void Player::setNr(int newNr)
{
    nr = newNr;
}

inline void Player::setPosition(string newPosition)
{
    position = newPosition;
}

inline void Player::setFoot(string newFoot)
{
    foot = newFoot;
}

void Player::incrementGoals(int addGoal)
{
    goals = goals + addGoal;
}

inline int Player::getNr()
{
    return nr;
}

inline string Player::getPosition()
{
    return position;
}

inline int Player::getGoals()
{
    return goals;
}

inline string Player::getFoot()
{
    return foot;
}

void Player::print()
{
    cout<<endl;
    TournamentMember::print();
    cout << "Number: " << nr << endl;
    cout << "Position: " << position << endl;
    cout << "Goals: " << goals << endl;
    cout << "Foot: " << foot << endl;
    cout<<endl;
}

//Referee

Referee::Referee()
{
    cout << "referee creating constructor called" << endl;
    yellowCardCount = 0;
    redCardCount = 0;
}

Referee::Referee(const Referee &obj)
{
    cout << "copy referee constructor called" << endl;
    yellowCardCount = obj.yellowCardCount;
    std::copy(obj.yellowCardList, obj.yellowCardList + 50, yellowCardList);
    redCardCount = obj.redCardCount;
    std::copy(obj.redCardList, obj.redCardList + 50, redCardList);
}

Referee::~Referee()
{
    cout << "referee destructor called" << endl;
}

bool Referee::addToYellowCardList(Player *p)
{
    int kk = 0;
    bool check_yellow = false;
    for(int i = 0; i < 50; i++)
    {
        if(yellowCardList[i] == p)
        {
            check_yellow = true;
            kk = i;
        }
    }
    if(check_yellow)
    {
        Player check_player = *p;
        yellowCardList[kk] = NULL;
        if((yellowCardList[kk+1] != NULL))
        {
            for(int j = kk + 1; j < 50; j++)
            {
                yellowCardList[j-1] = yellowCardList[j];
            }
        }
        cout << "The player has two yellow cards, so he has a red card now" << endl;
        return addToRedCardList(&check_player);
    }
    else
    {
        for(int i = 0; i < 50; i++)
        {
            if(yellowCardList[i] == NULL)
            {
                yellowCardList[i] = p;
            }
        }
        return true;
    }
}

bool Referee::addToRedCardList(Player *p)
{
    bool check_red = false;
    for(int i = 0; i < 50; i++)
    {
        if(redCardList[i] == p)
        {
            check_red = true;
        }
    }
    if(check_red)
    {
        return false;
    }
    else
    {
        for(int i = 0; i < 50; i++)
        {
            if(redCardList[i] == NULL)
            {
                redCardList[i] = p;
            }
        }
        return true;
    }
}
