/*
    CH08-320142
    a3_p1.cpp
    Tudor Maiereanu
    t.maiereanu@jacobs-university.de
*/

#include<string>

class City
{
    private:
        std::string name;
        int citz;
        std::string location;
        std::string poi;

    public:

        City(std::string, int, std::string, std::string);
        City();

        //setter methods
        void setName(std::string& newName);
        void setCitizens(int newCitizens);
        void setLocation(std::string& newLocation);
        void setPOI(std::string& newPOI);

        //getter methods
        std::string getName();
        int  getCitizens();
        std::string getLocation();
        std::string getPOI();
        void print();
};


