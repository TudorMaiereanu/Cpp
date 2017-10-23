/*
    CH08-320142
    a6_p4.cpp
    Tudor Maiereanu
    t.maiereanu@jacobs-university.de
*/

#include <iostream>
#include <cstdlib>
#include<ctime>

#include "Area.h"
#include "Circle.h"
#include "Ring.h"
#include "Rectangle.h"
#include "Square.h"


using namespace std;

string randomColor()
{
    string arr_colors[] = {"RED","GREEN","BLUE","YELLOW"};
    int color, randomNumber;
    randomNumber = rand();
    color = randomNumber % 4;
    return arr_colors[color];
}

int randomSize()
{
    int randomNumber = rand();
    return (randomNumber % 75) + 1;
}

int randomNumber()
{
    int randomNumber = rand();
    return (randomNumber % 4);
}

const int num_obj = 30;
int main()
{
    double sum_area = 0.0;
	double sum_perimeter = 0.0;
/*
Diagram:

             Area of Shape
            /             \
          Circle       Rectangle
            |             |
           Ring         Square

*/
srand ( static_cast < unsigned int >( time (0) ) );
	Area *list[num_obj];
	int index = 0;
	for(int i = 0; i < num_obj; i++)
    {
        int ran = randomNumber();
        if (ran==0)
        {
            list[i] = new Circle(randomColor().c_str(), randomSize());
        }
        else
        {
            if (ran==1)
            {
                list[i] = new Ring(randomColor().c_str(), randomSize(), randomSize());
            }
            else
            {
                if (ran==2)
                {
                    list[i] = new Rectangle(randomColor().c_str(), randomSize(), randomSize());
                }
                else
                {
                    list[i] = new Square(randomColor().c_str(), randomSize());
                }
            }
        }
	}
	while (index < num_obj)
    {
        cout<<endl;
		list[index]->getColor();
        cout<<endl;
        cout << " Area: "<<endl;
        cout<< list[index]->calcArea();
        cout<<endl;
        cout << " Perimeter: " <<endl;
        cout<<list[index]->calcPerimeter();

        sum_area += (list[index])->calcArea();
		sum_perimeter += (list[index])->calcPerimeter();
        index++;
	}
	cout<<endl;
	cout << "\nThe total area is "
			<< sum_area << " units " << endl;
    // (9) We print the total sum of the areas
    cout << "\nThe total perimeter is "
			<< sum_perimeter << " units " << endl;
	return 0;
}

