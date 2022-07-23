#include "Trapezoid.h"
#define _USE_MATH_DEFINES
#include <math.h>
#include <iostream>

using namespace std;

double Trapezoid::Set_left_side() {
	cout << "Enter left side:   ";
	cin >> left_side;
	return left_side;
}

double Trapezoid::Set_right_side() {
	cout << "Enter right side:   ";
	cin >> right_side;
	return right_side;
	
}

double Trapezoid::Set_top_side() {
	cout << "Enter top side:   ";
	cin >> top_side;
	return top_side;
}

double Trapezoid::Set_bottom_side() {
	cout << "Enter bottom side:   ";
	cin >> bottom_side;
	return bottom_side;
}



double Trapezoid::Get_hight() {
	hight = (sqrt(pow(left_side, 2) - (pow((((pow((bottom_side - top_side), 2)) +
		(pow(left_side, 2) - (pow(right_side, 2)))) / (2 * (bottom_side - top_side))), 2))));
	return hight;
}

double Trapezoid::Get_angel_bottom_left() {
	return (asin(hight / left_side) * 180 / M_PI);
}
double Trapezoid::Get_angel_bottom_right() {
	return (asin(hight / right_side) * 180 / M_PI);
}
double Trapezoid::Get_angel_top_left() {
	return (180 - Get_angel_bottom_left());
}
double Trapezoid::Get_angel_top_right() {
	return 180 - Get_angel_bottom_right();
}

double Trapezoid::Get_perimetr() {
	perim = (left_side + right_side + top_side + bottom_side);
	return perim;
}

double Trapezoid::Get_area() {
	area = (hight * (top_side + bottom_side) * 0.5);
	return area;
}
void Trapezoid::about_rectangle()
{
	Set_left_side();
	Set_bottom_side();
	Set_top_side();
	Set_right_side();
	Get_hight();
	Get_perimetr();
	Get_area();
	cout << "Perim   " << Get_perimetr() << "	Area	" << Get_area()<< "  " << hight << "	angel_bottom_left	" << Get_angel_bottom_left()<< "	angel_bottom_right	" << Get_angel_bottom_right() <<  "	angel_top_left	" << Get_angel_top_left() <<  "	angel_top_right	" << Get_angel_top_right();
}