/*
    CH08-320142
    a5_p2.cpp
    Tudor Maiereanu
    t.maiereanu@jacobs-university.de
*/
#include <iostream>
#include <cstring>
#include "TournamentMember.h"
using namespace std;

string TournamentMember::location = "Germany";
TournamentMember::TournamentMember() {
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

TournamentMember::TournamentMember(const TournamentMember &obj) {
    cout << "copy constructor called" << endl;
    strcpy(first,obj.first);
    strcpy(last,obj.last);
    strcpy(bday,obj.bday);
    role= obj.role;
    team = obj.team;
}

TournamentMember::~TournamentMember() {
    cout << "destructor called" << endl;
}


//inline

inline void TournamentMember::setFirst(char* newFirst){
    strcpy(first, newFirst);
}

inline void TournamentMember::setLast(char* newLast){
    strcpy(last,newLast);
}

inline void TournamentMember::setBday(char* newBday){
    strcpy(bday, newBday);
}

inline void TournamentMember::setRole(std::string newRole) {
    role = newRole;
}

inline void TournamentMember::setTeam(std::string newTeam) {
    team = newTeam;
}

//Getters
inline char* TournamentMember::getFirst(){
    return first;
}

inline char* TournamentMember::getLast(){
    return last;
}

inline char* TournamentMember::getBday(){
    return bday;
}

inline string TournamentMember::getRole(){
    return role;
}

inline string TournamentMember::getTeam(){
    return team;
}


void TournamentMember::setLocation(string newLocation) {
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
