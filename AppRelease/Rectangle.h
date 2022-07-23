#pragma once
#ifndef RECTANGLE_H
#define RECTANGLE_H


class Rectangle {
private:
	double width;
	double height;
	double perim;
	double area;

	
	double Get_width();
	double Get_height();
	double Get_perimeter();
	double Get_area();
	public:
		void about_Rectangle();
};
#endif