/*
    CH08-320142
    a2_p7.cpp
    Tudor Cristian Maiereanu
    t.maiereanu@jacobs-university.de
*/

#include <string> // defines standard C++ string class

/* First C++ class */
class Critter
{
private:  // data members are private
	std::string name;
	int hunger;
	int boredom;
	int age;
	std::string country;
	std::string favouritecolor;


public: // business logic methods are public
	// setter methods
	void setName(std::string& newname);
	void setHunger(int newhunger);
	void setBoredom(int newboredom);
	void setAge(int newage);
	void setCountry(std::string& newcountry);
	void setFavouritecolor(std::string& newfavouritecolor);
	// getter method
	std::string getName();
	int getHunger();
	int getBoredom();
	int getAge();
	std::string getCountry();
	std::string getFavouritecolor();
	// service method
	void print();
};
