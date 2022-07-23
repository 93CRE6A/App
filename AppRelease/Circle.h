#pragma once
#ifndef CIRCLE_H
#define CIRCLE_H
class Circle
{

private:
	double rad,
		perim,
		area;
	double set_rad();
	double Cperim();
	double Carea();
	
public:
 void about_circle();

};
#endif
