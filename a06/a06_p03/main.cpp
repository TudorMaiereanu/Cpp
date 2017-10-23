/*
    CH08-320142
    a6_p3.cpp
    Tudor Maiereanu
    t.maiereanu@jacobs-university.de
*/
#include <iostream>
using namespace std;
#include "Area.h"
#include "Circle.h"
#include "Ring.h"
#include "Rectangle.h"
#include "Square.h"

const int num_obj = 7;
int main()
{
/*
Diagram:

             Area of Shape
            /             \
          Circle       Rectangle
            |             |
           Ring         Square

*/
	Area *list[num_obj];
	// (1) It is created an array which will store the areas of the objects
	int index = 0;
	// (2) We will use index in the for loop, increasing it after we store a value of an area
	double sum_area = 0.0;
	double sum_perimeter = 0.0;
	// (3)	We need a default value for the sum which is 0.0 so that we can compute the sum of the areas.
	cout << "Creating Ring: ";
	Ring blue_ring("BLUE", 5, 2);
	// (4) It is created a ring which is colored in blue, has an outer radius of 5 and an inner radius of 2
	cout << "Creating Circle: ";
	Circle yellow_circle("YELLOW", 7);
	cout << "Creating Rectangle: ";
	Rectangle green_rectangle("GREEN",5,6);
	cout << "Creating Circle: ";
	Circle red_circle("RED", 8);
	cout << "Creating Rectangle: ";
	Rectangle black_rectangle("BLACK", 10, 20);
	cout << "Creating Ring: ";
	Ring violet_ring("VIOLET", 100, 5);
	cout << "Creating Square: ";
	Square yellow_square("YELLOW", 10);
	list[0] = &blue_ring;
	// (5) The blue ring is stored in the position 0 so that we can later add its area to the sum.
	list[1] = &yellow_circle;
	list[2] = &green_rectangle;
	list[3] = &red_circle;
	list[4] = &black_rectangle;
	list[5] = &violet_ring;
	list[6] = &yellow_square;
	while (index < num_obj) {
    /* (7) We start the loop to calculate the total area.
           The loop stops when the index is not anymore lower than the number of objects.
           The index is later increased by 1 after each loop */
		(list[index])->getColor();
    /* (8) The array is a pointer
           We use -> in order to point to the method that prints the color */
		sum_area += (list[index])->calcArea();
		sum_perimeter += (list[index++])->calcPerimeter();
	}
	cout<<endl;
	cout << "\nThe total area is "
			<< sum_area << " units " << endl;
    // (9) We print the total sum of the areas
    cout << "\nThe total perimeter is "
			<< sum_perimeter << " units " << endl;
	return 0;
}
