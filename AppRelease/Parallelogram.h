#pragma once
#ifndef PARALLELOGRAM_H
#define PARALLELOGRAM_H


class Parallelogram
{
public:
	void about_Par();
private:
	double Set_sides();
	double Set_base();
	double Set_hight();
	double B_D_angles();
	double A_C_angles();
	double Get_perimetr();
	double Get_area();

	double sides,
		bases,
		hight;

};

#endif PARALLELOGRAM_H