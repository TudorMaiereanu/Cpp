/*
    CH08-320142
    a3_p1.cpp
    Tudor Maiereanu
    t.maiereanu@jacobs-university.de
*/

#include <iostream>
#include "City.h"


int main()
{
    City a("Bremen", 9999, "Germany", "JUB");
    a.print();
    City b("Hamburg", 1043219, "Germany", "TownHall");
    b.print();
    City c("Berlin", 43214, "Germany", "BerlinWall");
    c.print();
        return 0;
}
