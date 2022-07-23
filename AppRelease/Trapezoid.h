#pragma once
#ifndef TRAPEZOID_H
#define TRAPEZOID_H

class Trapezoid { 
public:
	void about_rectangle();
private:
	double left_side,
		right_side,
		top_side,
		bottom_side,
		perim,
		area;
	double hight = 0;
	double angel_bottom_right{};
	double angel_top_right{};
	double angel_top_left{};
	double angel_bottom_left{};
	
	double Get_hight();
	double Set_left_side();
	double Set_right_side();
	double Set_top_side();
	double Set_bottom_side();
	double Get_perimetr();
	double Get_area();
	double Get_angel_bottom_right();
	double Get_angel_top_right();
	double Get_angel_top_left();
	double Get_angel_bottom_left();
	
};


#endif 