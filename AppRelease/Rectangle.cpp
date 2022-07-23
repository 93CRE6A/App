#include "Rectangle.h"
#include <iostream>

using namespace std;

double Rectangle::Get_width() 
{
	cout << "Enter width:    ";
	cin >> width;
	return this->width;
}

double Rectangle::Get_height() 
{
	cout << "Enter height:    ";
	cin >> height;
	return this->height;
}

double Rectangle::Get_area() 
{
	area = (this->height * this->width);
	return area;
}


double Rectangle::Get_perimeter() 
{
	perim = (this->height * 2 + this->width * 2);
	return perim;
}
void Rectangle::about_Rectangle()
{
	Get_width();
	Get_height();
	Get_perimeter();
	Get_area();
	cout << "Perimetr:   " << Get_perimeter() << "    " << "Area:   " << area << "    "  << endl;


}